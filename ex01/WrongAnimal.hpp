#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include "Animal.hpp"

class	WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal	&operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();
		void	makeSound() const;
		std::string	getType() const;
};

#endif
