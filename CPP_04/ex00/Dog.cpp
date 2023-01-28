#include "Dog.hpp"

Dog::Dog()
{
	std::cout << MAG "Called Dog - default constructor!\n" END;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << MAG "Called Dog - destructor\n" END;
}

Dog &Dog::operator = (const Dog Dog)
{
	std::cout << MAG "Called Dog - copy assigment operator\n" END;
	this->type = Dog.type;
	return (*this);
}

Dog::Dog(const Dog &Dog)
{
	std::cout << MAG "Called Dog - copy constructor\n" END;
	*this = Dog;
}

void Dog::makeSound() const
{
	std::cout << GRE "Dog barking\n" END;
}
