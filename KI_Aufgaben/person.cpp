/*Aufgabe 1: Einfache Klasse Person
Ziel: Erstelle eine Klasse Person mit den Attributen name (String) und alter (int).

Schreibe einen parameterisierten Konstruktor (mit geschweiften Klammern!), der name und alter initialisiert.
Füge eine Methode vorstellen() hinzu, die eine Begrüßung ausgibt (z. B. "Hallo, ich bin [Name] und bin [Alter] Jahre alt.").*/


#include <iostream>
#include <string>
//Klasse 	wird deklariert und definiert
class Person{
	private:
	std::string name;
	int alter;
	public:
	Person(std::string n, int a)	//initialisierter Konstruktor
	: name{n},alter{a} {}
	
	void vorstellen() const{		//member gibt Name und Alter aus	+++const nachträglich hinzugefügt
		std::cout << "Hallo, ich bin " << name << " und bin " << alter << " Jahre alt.\n";
	};
};

int main(){
	//objekte werden initialisiert
	Person p1("Peter Lustig", 42);
	Person p2("Max Mustermann", 1337);
	//Obj1 und Obj2 werden ausgegebn
	p1.vorstellen();
	p2.vorstellen();
}
