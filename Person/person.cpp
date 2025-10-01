#include "person.h"
#include <iostream>

void Person::getName(){
	std::cout << name << std::endl;
}

void getAlter(){
	std::cout << alter << std::endl;
}

int setAlter(int neuesAlter){
	return alter=neuesAlter;
}

std::string setName(const std::string& neuerName){
	return name=neuerName;
}
