#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Hello WrongCat\n";
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Bye WrongCat\n";
	return ;
}

void	WrongCat::makeSound() const
{
	std::cout << "meooooow\n";
}
