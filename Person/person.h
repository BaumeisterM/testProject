#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person{
public:
	Person(std::string pName="", int pAlter=0)
	: name {pName}, alter {pAlter}
	{}
	void getName();
	void getAlter();
	std::string setName(const std::string& neuerName);
	int setAlter(int neuesAlter);
private:
	std::string name;
	int alter;
};

#endif
