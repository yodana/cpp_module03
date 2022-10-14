#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    public:
        DiamondTrap();
        DiamondTrap(std::string);
        ~DiamondTrap(void);
        DiamondTrap(DiamondTrap const &src);
        DiamondTrap & operator=(DiamondTrap const & rhs);
        void whoAmI();
        using ScavTrap::attack;            
    
    private:
        std::string _name;

};

#endif