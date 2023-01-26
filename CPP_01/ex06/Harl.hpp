#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
# define RED "\033[31m"
# define GRE "\033[32m"
# define YEL "\033[33m"
# define BLU "\033[34m"
# define MAG "\033[35m"
# define END "\033[0m"

class Harl 
{
	private:
		int		getIn(std::string level);
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif
