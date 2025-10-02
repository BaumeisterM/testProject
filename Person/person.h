#pragma once
#include <string>

enum class Geschlecht{maennlich,weiblich,divers};
class Person{
private:
	std::string name;
	int alter;
	Geschlecht gender;
public:
	Person(Geschlecht geschlecht): name{""}, alter{0}, gender{geschlecht} {}

	Person(std::string pName = "", int pAlter = 0): name{pName}, alter{pAlter}, gender{Geschlecht::divers} {}

	//getter
	std::string getName() const;
	int getAlter() const;
	std::string getGeschlechtText() const;
	
	//setter
	void setName(const std::string& neuerName);
	void setAlter(int neuesAlter);
	void setGeschlecht(Geschlecht geschlecht);
	
	//Geschlechtsabfrage
	bool istMann() const;
	bool istFrau() const;
	bool istDivers() const;
	
	void printGeschlecht() const;
};
