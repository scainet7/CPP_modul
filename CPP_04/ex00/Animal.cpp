#include "Animal.hpp"

Animal::Animal()
{
	std::cout << MAG "Called Animal - default constructor!\n" END;
	this->type = "Animal";
}

Animal::~Animal()
{
	std::cout << MAG "Called Animal - destructor\n" END;
}

Animal &Animal::operator=(const Animal other)
{
	std::cout << MAG "Called Animal - copy assigment operator\n" END;
	this->type = other.type;
	return (*this);
}

Animal::Animal(const Animal &other)
{
	std::cout << MAG "Called Animal - copy constructor\n" END;
	*this = other;
}

void Animal::makeSound() const
{
	std::cout << BLU "The animal makes a sound\n" END;
}

std::string Animal::getType() const
{
	return (this->type);
}
