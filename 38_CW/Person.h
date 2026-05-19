#pragma once
#include <iostream>
#include <string>


class Person
{
	std::string name;
	bool isVeteran;
	bool isMilitary;
	bool isDeputate;

public:
	Person();
	Person(std::string name, bool isVeteran = false, bool isMilitary = false, bool isDeputate = false);

	void showInfo() const;

	bool operator<(const Person& obj)const&; // a < b  *this < obj




};

