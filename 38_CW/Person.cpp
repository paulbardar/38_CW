#include "Person.h"
#include <iomanip>

Person::Person()
{
	name = "Noname";
	isVeteran = false;
	isMilitary = false;
	isDeputate = false;
}

Person::Person(std::string name, bool isVeteran, bool isMilitary, bool isDeputate) {
	this->name = name;
	this->isVeteran = false;
	this->isMilitary = false;
	this->isDeputate = false;
}

void Person::showInfo() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Veteran: " << std::boolalpha<<isVeteran << std::endl;
	std::cout << "Military: " << std::boolalpha << isMilitary << std::endl;
	std::cout << "Deputate: " << std::boolalpha << isDeputate << std::endl;
}
