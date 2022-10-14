#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(std::string);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const &src);
        ScavTrap & operator=(ScavTrap const & rhs);
        void guardGate();
};

#endif