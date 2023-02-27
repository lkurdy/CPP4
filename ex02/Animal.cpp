#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Hello Animal\n";
	return ;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	return ;
}

Animal	&Animal::operator=(const Animal &other)
{
	this->type = other.type;
	return (*this);
}
Animal::~Animal()
{
	std::cout << "Bye Animal\n";
	return ;
}

std::string	Animal::getType() const
{
	return (this->type);
}
