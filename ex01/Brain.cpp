#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Hello I'm Brain\n";
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = "*random idea*";
	return ;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Hello I'm Brain\n";
	*this = other;
	return ;
}

Brain	&Brain::operator=(const Brain &other)
{
	for (int i = 0 ; i < 100 ; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Bye from Brain\n";
	return ;
}
