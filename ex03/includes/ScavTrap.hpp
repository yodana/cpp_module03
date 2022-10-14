#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const &src);
        ScavTrap & operator=(ScavTrap const & rhs);
        void guardGate();
        void attack(const std::string &target);
};

#endif