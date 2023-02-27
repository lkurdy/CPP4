#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal *copy;
	const Animal *paste(j);
//	const Animal *meta = new Animal();
//	const Animal *zoo[10];

	copy = i;
	std::cout << std::endl;
	std::cout << copy->getType() << ": ";
	copy->makeSound();
	std::cout << paste->getType() << ": ";
	paste->makeSound();
	std::cout << i->getType() << ": ";
	i->makeSound();
	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << std::endl;
	delete i;
	delete j;
	/*
	std::cout << std::endl;
	for (int a = 0; a < 10; a++)
	{
		if (a % 2)
			zoo[a] = new Cat();
		else
			zoo[a] = new Dog();
	}
	for (int a = 0; a < 10; a++)
		delete zoo[a];
		*/
	return (0);
}
