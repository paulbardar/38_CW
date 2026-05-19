#pragma once

#include <iostream>
class Music
{
	std::string name;
	std::string author;
	int year;

public: 
	Music();
	Music(std::string name, std::string author, int year);

	std::string getName() const;
	std::string getAuthor() const;
	int getYear() const;


};

