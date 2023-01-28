#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:

	protected:
	
	public:
		Dog();
		virtual ~Dog();
		Dog &operator = (const Dog dog);
		Dog(const Dog &dog);
		virtual void makeSound() const;
};

#endif
