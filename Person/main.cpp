#include <iostream>
#include "person.h"
int main(){
	Person p1("Annabella Meier", 22);
	
	p1.getName();
	std::cout << " ist ";
	p1.getAlter();
	std::cout << " Jahre alt." << std::endl;
	
	p1.setAlter(23);
	
	p1.getName();
	std::cout << " hatte Geburtstag. Sie ist jetzt ";
	p1.getAlter();
	std::cout << " Jahre alt." << std::endl;
	
	p1.setName("Annabella Schulz");
	
	std::cout << "Sie hat auch geheiratet. Ihr Name ist jetzt ";
	p1.getName();
	std::cout << "." << std::endl;
}
