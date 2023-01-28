#include "Cat.hpp"

Cat::Cat()
{
	std::cout << MAG "Called CAT - default constructor!\n" END;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << MAG "Called Cat - destructor\n" END;
}

Cat &Cat::operator = (const Cat cat)
{
	std::cout << MAG "Called Cat - copy assigment operator\n" END;
	this->type = cat.type;
	return (*this);
}

Cat::Cat(const Cat &cat)
{
	std::cout << MAG "Called Cat - copy constructor\n" END;
	*this = cat;
}

void Cat::makeSound() const
{
	std::cout << GRE "Cat meows\n" END;
}
