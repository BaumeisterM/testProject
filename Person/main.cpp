#include <iostream>
#include "person.h"

int main(){
	Person p1("Annabella Meier", 22);
	Person p2(Geschlecht::maennlich);
	
	p2.setName("Georg Gugelhupf");
	p2.setAlter(42);
	
	std::cout << p2.getName() << " ist " << p2.getAlter() << " Jahre alt" << std::endl;
	p2.printGeschlecht();
	
	std::cout << p1.getName() << " ist " << p1.getAlter() << " Jahre alt." << std::endl;
	p1.setGeschlecht(Geschlecht::weiblich);
	p1.printGeschlecht();
	
	p1.setAlter(23);
	std::cout << p1.getName() << " hatte Geburtstag. Sie ist jetzt " << p1.getAlter() << " Jahre alt." <<std::endl;
	
	p1.setName("Annabella Schulz");
	std::cout << "Sie hat auch geheiratet. Ihr Name ist jetzt " << p1.getName() << "." << std::endl;
	
	return 0;
}
