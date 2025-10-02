/*Aufgabe 1: Klasse mit Konstruktoren und Initialisierungsliste
Thema: Klassen, Konstruktoren, Initialisierungslisten, Kapselung
Aufgabenstellung:
Erstelle eine Klasse Bruch, die einen Bruch (Zähler und Nenner)
repräsentiert.
Anforderungen:

Member-Variablen: zaehler (int) und nenner (int) als private.
Konstruktoren:

Standardkonstruktor: Setzt den Bruch auf 0/1.
Parameterisierter Konstruktor: Akzeptiert Zähler und Nenner (Nenner
darf nicht 0 sein!).
Kopierkonstruktor: Erstellt eine Kopie eines bestehenden Bruchs.


Member-Funktionen:

void kuerzen(): Kürzt den Bruch (z.B. 4/8 → 1/2).
void ausgeben(): Gibt den Bruch als String aus (z.B. "3/4").


Initialisierungsliste: Nutze sie für alle Konstruktoren.
Sicherheit: Wirf eine Exception (std::invalid_argument), wenn der 
Nenner 0 ist.

Beispiel:
Bruch b1;          // 0/1
Bruch b2(4, 8);    // 4/8 → nach kuerzen() 1/2
Bruch b3(b2);      // Kopie von b2
b2.ausgeben();     // Ausgabe: "1/2"
Bonus:

Füge eine Methode double dezimalwert() hinzu, die den Bruch als 
Dezimalzahl zurückgibt.*/

#include <iostream>
#include <cstdlib>
//Klasse Bruch deklariert und definiert
class Bruch{
	private:
	int zaehler, nenner;		//attribute
	
	public:
	Bruch(int z=0, int n=1):zaehler{z},nenner{n}{	//parametisierter Konstruktor
		if(nenner==0){
			std::cerr << "Nenner darf nicht 0 sein!" << '\n';		//mit Fehlermeldung wenn nenner = 0
			exit(1);
		}
	}
	Bruch(const Bruch& bruch): zaehler(bruch.zaehler), nenner(bruch.nenner){} // Kopierkonstruktor
	
	int ggt(int a, int b){	//Funktion für größten gemeinsamen Teiler  ab c++17 auch gcd() in <algorithm> möglich
		while(b!=0){
			int temp=b;
			b=a%b;
			a=temp;
		}
		return a;
	}
	void kuerzen(){				//kürzt den Bruch
		int grgete=ggt(zaehler, nenner);
		zaehler/=grgete;
		nenner/=grgete;
	}
	void ausgeben(){		//gibt Bruch aus in "a/b" format aus
		std::cout << "Ausgabe: " << zaehler << "/" << nenner << '\n';
	}
	
	void dezimalAusgabe(){ //gibt bruch als dezimalzahl aus
		std::cout << "Ausgabe in Dezimal: " << static_cast<double>(zaehler)/static_cast<double>(nenner) << '\n';
	};
};

int main(){			
	Bruch b1;		//standart Konstruktor
	Bruch b2(4,8);	//parametisierter Konstruktor
	Bruch b3(b2);	//Kopierkonstruktor
	
	b2.ausgeben();
	b2.dezimalAusgabe();
	b1.ausgeben();
}
