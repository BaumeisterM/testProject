/*Aufgabe 3: Klasse Rechteck mit Berechnungen
Ziel: Erstelle eine Klasse Rechteck mit den Attributen laenge und breite (beide double).

Schreibe einen parameterisierten Konstruktor (geschweifte Klammern!).
Füge Methoden hinzu:

flaeche(): Berechnet die Fläche (laenge * breite).
umfang(): Berechnet den Umfang (2 * (laenge + breite)).*/


#include <iostream>
//Klasse deklariert und initialisiert
class Rechteck{
	private:
	double laenge;		// Attribute
	double breite;
	public:
	Rechteck(double l, double b): laenge{l}, breite{b}{}	//parametisiert Konstruktor
	
	void getFlaeche() const{			//+++ const nachträglich mit eingebaut
		std::cout <<"Die Flaeche des Rechteckes betraegt: " << laenge*breite << '\n';     //methode um Flaeche auszugeben
	}
	void getUmfang() const{
		std::cout << "Der Umfang des Rechteckes betraegt: " << 2*(laenge+breite) << '\n';//methode um Umfange auszugeben
	}
	
};

int main(){
	Rechteck r1(5.3,2.3);		//Objekte werden hier erstellen
	Rechteck r2(12.23,5.22);
	Rechteck r3(4.0, 2.0);
	
	r1.getFlaeche();			//Ausgabe
	r1.getUmfang();
	r2.getFlaeche();
	r2.getUmfang();
	r3.getFlaeche();
	r3.getUmfang();
	
	
}
