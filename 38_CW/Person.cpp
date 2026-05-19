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
	this->isVeteran = isVeteran;
	this->isMilitary = isMilitary;
	this->isDeputate = isDeputate;
}

void Person::showInfo() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Veteran: " << std::boolalpha<<isVeteran << std::endl;
	std::cout << "Military: " << std::boolalpha << isMilitary << std::endl;
	std::cout << "Deputate: " << std::boolalpha << isDeputate << std::endl;
}

bool Person::operator<(const Person& obj) const&
{
	return (this->isVeteran + this->isDeputate + this->isMilitary) < (obj.isVeteran + obj.isDeputate + obj.isMilitary);
}
