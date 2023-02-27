#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Hello WrongAnimal\n";
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Bye WrongAnimal\n";
	return ;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*WrongAnimal sound*\n";
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
