/*Aufgabe 2: Standardkonstruktor für Person
Ziel: Erweitere die Klasse Person um einen Standardkonstruktor, der name auf "Unbekannt" und alter auf 0 setzt.*/


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
	Person(): name{"Unbekannt"}, alter{0} {}	//Standart Konstruktor
	
	void vorstellen() const{		//member gibt Name und Alter aus	+++const nachträglich hinzugefügt
		std::cout << "Hallo, ich bin " << name << " und bin " << alter << " Jahre alt.\n";
	};
};

int main(){
	//objekte werden initialisiert
	Person p1("Peter Lustig", 42);
	Person p2("Max Mustermann", 1337);
	Person p3;
	//Obj1 und Obj2 werden ausgegebn
	p1.vorstellen();
	p2.vorstellen();
	p3.vorstellen();
}
