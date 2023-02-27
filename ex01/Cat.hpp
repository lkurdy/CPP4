#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal
{
	Brain	*b;

	public:
		Cat();
		Cat(const Cat &other);
		Cat	&operator=(const Cat &other);
		~Cat();
		void	makeSound() const;
};

#endif
