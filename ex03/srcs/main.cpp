#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main( void ) {
    DiamondTrap a("Diamonddana");
    DiamondTrap b;
    a.attack("the corrector");
    for(int i = 0; i<=10;i++ )
        a.beRepaired(1);
    a.takeDamage(1000);
    a.highFivesGuys();
    a.attack("the corrector");
    a.whoAmI();
    return 0;
}