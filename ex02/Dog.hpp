#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	Brain	*b;

	public:
		Dog();
		Dog(const Dog &other);
		Dog	&operator=(const Dog &other);
		~Dog();
		void	makeSound() const;
};

#endif
