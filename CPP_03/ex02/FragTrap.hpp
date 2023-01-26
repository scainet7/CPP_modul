#ifndef FRAG_TRAP
#define FRAG_TRAP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap();
		~FragTrap();
		FragTrap(std::string _person_name);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		void HighFivesGuys(void);

};

#endif
