#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Hello Dog\n";
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog &other)
{
	*this = other;
	return ;
}

Dog	&Dog::operator=(const Dog &other)
{
	this->type = other.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Bye Dog\n";
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "woof woof\n";
}
