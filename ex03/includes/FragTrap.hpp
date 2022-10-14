#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string);
        ~FragTrap(void);
        FragTrap(FragTrap const &src);
        FragTrap & operator=(FragTrap const & rhs);
        void highFivesGuys();
};

#endif