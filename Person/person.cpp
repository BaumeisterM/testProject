#include "person.h"
#include <iostream>

std::string Person::getName() const{return name;}
int Person::getAlter() const{return alter;}

std::string Person::getGeschlechtText() const{
	if(istMann()) return "maennlich";
	if(istFrau()) return "weiblich";
	return "divers";
}

void Person::setAlter(int neuesAlter){alter=neuesAlter;}
void Person::setName(const std::string& neuerName){name=neuerName;}
void Person::setGeschlecht(Geschlecht geschlecht){gender=geschlecht;}
	
bool Person::istMann() const{return gender==Geschlecht::maennlich;}
bool Person::istFrau() const{return gender==Geschlecht::weiblich;}
bool Person::istDivers() const{return gender==Geschlecht::divers;}

void Person::printGeschlecht() const{
	std::cout << "Geschlecht: " << getGeschlechtText() << std::endl;
}
