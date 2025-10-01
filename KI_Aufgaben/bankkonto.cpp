/*Aufgabe 4: Klasse Bankkonto mit Ein- und Auszahlung
Ziel: Erstelle eine Klasse Bankkonto mit den Attributen kontonummer (String) und kontostand (double).

Schreibe einen parameterisierten Konstruktor (geschweifte Klammern!).
Füge Methoden hinzu:

einzahlen(double betrag): Erhöht den kontostand.
abheben(double betrag): Verringert den kontostand (nur, wenn genug Geld vorhanden ist!).
kontostandAnzeigen(): Gibt den aktuellen Kontostand aus.*/


#include <iostream>
#include <string>
//Klasse Deklariert und initialisiert
class Bankkonto{
	private:
	std::string kontonummer;	//Attribute
	double kontostand;
	public:
	Bankkonto(std::string kNummer, double kStand):kontonummer{kNummer}, kontostand{kStand}{} //parametisierter Konstruktor
	Bankkonto():kontonummer{"Keine angaben"}, kontostand{0}{}			//StandardKonstruktor
	
	double einzahlen(double betrag){			//methode zum einzahlen
		kontostand+=betrag;
		return kontostand;
	}
	bool abheben(double betrag){				//methode zum abheben aber nur wenn genügend vorhanden ist
		if(kontostand>=betrag){
			kontostand-=betrag;
			return true;
		}
		else{							//meldung wenn nicht genug vorhanden ist
			std::cerr << "Fehler: Nur " << kontostand << " Euro verfuegbar. Abhebung von " << betrag << " Euro nicht moeglich.\n";
			return false;
		}
	}
	void getKontostand() const{					//Ausgabe der Kontonummer mit Kontostand 
		std::cout << "Der aktuelle Kontostand auf der Kontonummer "<< kontonummer << " betraegt: " << kontostand << " Euro\n";
	}
};

int main(){
	Bankkonto b1("DE147800021341", 3214.22);				//Objekte mit parameter + Standart objekt
	Bankkonto b2("DE639920002331", 14221.41);
	Bankkonto b3;
	
	b1.getKontostand();					//Kontostand ausgabe
	b2.getKontostand();
	b3.getKontostand();
	
	b1.einzahlen(55.56);				//einzahlen + 2x abheben wenn möglich
	b2.abheben(5432.12);
	b3.abheben(4.2);
}
