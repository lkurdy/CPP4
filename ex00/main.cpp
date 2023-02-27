#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* c = new WrongCat();

	std::cout << std::endl;
	std::cout << i->getType() << ": ";
	i->makeSound();
	std::cout << j->getType() << ": ";
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;
	std::cout << c->getType() << ": ";
	c->makeSound();
	wrong->makeSound();
	std::cout << std::endl;

	delete wrong;
	delete c;
	delete i;
	delete j;
	delete meta;
	return (0);
}
