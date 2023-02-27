#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Hello Cat\n";
	this->type = "Cat";
	this->b = new Brain();
	return ;
}

Cat::Cat(const Cat &other)
{
	*this = other;
	return ;
}

Cat	&Cat::operator=(const Cat &other)
{
	this->type = other.type;
	this->b = new Brain(*other.b);
	return (*this);
}

Cat::~Cat()
{
	delete this->b;
	std::cout << "Bye Cat\n";
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "meooooow\n";
}
