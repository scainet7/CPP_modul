#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:

	protected:
	
	public:
		Cat();
		virtual ~Cat();
		Cat &operator = (const Cat cat);
		Cat(const Cat &cat);
		virtual void makeSound() const;
};

#endif
