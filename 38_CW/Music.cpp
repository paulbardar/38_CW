#include "Music.h"

Music::Music(std::string name, std::string author, int year)
{
    this->name = name;
    this->author = author;
    this->year = year;
}

std::string Music::getName() const
{
    return name;
}

std::string Music::getAuthor() const
{
    return author;
}

int Music::getYear() const
{
    return year;
}
