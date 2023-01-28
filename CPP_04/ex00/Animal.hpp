#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <iomanip>

#define RED "\033[31m"
#define GRE "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define END "\033[0m"

class Animal
{
	private:

	protected:
		std::string type;

	public:
		Animal();
		virtual ~Animal();
		Animal &operator=(const Animal other);
		Animal(const Animal &other);
		virtual void makeSound() const;
		std::string getType() const;
		
};

#endif
