#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Hello Cat\n";
	this->type = "Cat";
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
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Bye Cat\n";
	return ;
}

void	Cat::makeSound() const
{
	std::cout << "meooooow\n";
}
