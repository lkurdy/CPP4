#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Hello Dog\n";
	this->type = "Dog";
	this->b = new Brain();
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
	this->b = new Brain(*other.b);
	return (*this);
}

Dog::~Dog()
{
	delete this->b;
	std::cout << "Bye Dog\n";
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "woof woof\n";
}
