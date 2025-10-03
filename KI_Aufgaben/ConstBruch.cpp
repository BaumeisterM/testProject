/*Aufgabe: Unveränderlicher Bruch mit constexpr und const
Thema: Klassen, Konstruktoren, constexpr, const, Kapselung
Anforderungen:


Klasse ConstBruch:

Member-Variablen: zaehler und nenner als const int (unveränderlich nach Initialisierung).
Konstruktoren:

constexpr-Standardkonstruktor: Setzt den Bruch auf 0/1.
constexpr-Parameterisierter Konstruktor: Akzeptiert Zähler und Nenner.

Fehlerbehandlung: Wirf eine std::invalid_argument-Exception, wenn der Nenner 0 ist.


Kopierkonstruktor: Erzeuge eine Kopie eines bestehenden Bruchs (auch constexpr).


Member-Funktionen:

constexpr void kuerzen(): Kürze den Bruch zur Compile-Zeit (nutze den Euklidischen Algorithmus).
constexpr double dezimalwert() const: Gib den Bruch als double zurück.
void ausgeben() const: Gib den Bruch als String aus (z.B. "3/4").


Statische Member-Funktion:

static constexpr ConstBruch addiere(const ConstBruch& a, const ConstBruch& b): Addiere zwei Brüche und gib das Ergebnis als neuen ConstBruch zurück.





constexpr-Objekte:

Erstelle constexpr-Objekte in main() und führe Berechnungen zur Compile-Zeit durch.



const-Korrektheit:

Alle Methoden, die den Zustand des Objekts nicht ändern, müssen als const markiert sein.
Der Kopierkonstruktor muss eine const-Referenz akzeptieren.*/

#include <iostream>
#include <stdexcept>
#include <numeric>

class ConstBruch{
	private:
	const int zaehler;
	const int nenner;
	public:
	constexpr ConstBruch(): zaehler{0}, nenner{1}{}			//Standartkonstruktor mit 0/1
	constexpr ConstBruch(int z, int n): zaehler{z/std::gcd(z,n)}, nenner{n/std::gcd(z,n)} {	//parametisiert Konstruktor  Bruch wird direkt gekürzt.
		if(nenner==0){
			throw std::invalid_argument("Nenner darf nicht 0 sein!");			//Fehlermeldung!
		}
	}	
	constexpr ConstBruch(const ConstBruch& cb): zaehler{cb.zaehler},nenner{cb.nenner}{
		if(nenner==0){
			throw std::invalid_argument("Nenner darf nicht 0 sein!");			//Fehlermeldung!
		}
	}
	
	constexpr double dezimalwert(int z, int n) const{					//int to double Cast und gibt Dezimalzahl zurück
		return static_cast<double>(z)/static_cast<double>(n);
	}
	void ausgeben() const{
		std::cout << zaehler << "/" << nenner << " Dezimalzahl: " << dezimalwert(zaehler, nenner)<< '\n'; 		//Ausgabe  Bruch und Dezimalzahl
	}
	static constexpr ConstBruch addiere(const ConstBruch& a, const ConstBruch& b){
		int neuer_zaehler = a.zaehler*b.nenner+b.zaehler*a.nenner;
		int neuer_nenner = a.nenner*b.nenner;			//addiert zwei Brüche
		return ConstBruch(neuer_zaehler,neuer_nenner);
	}
	
};

int main(){
	constexpr ConstBruch cb1(3,8);		//obj 1 3/8
	cb1.ausgeben();
	constexpr ConstBruch cb2(5,7); 		// obj 2 5/7
	cb2.ausgeben();
	constexpr ConstBruch cb3= ConstBruch::addiere(cb1,cb2);			//obj 3 = obj1+obj2
	std::cout << "Die Addition aus dem ersten Bruch cb1 und cb2 ist ";
	cb3.ausgeben();
}
