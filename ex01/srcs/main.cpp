#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>

int main( void ) {
    ClapTrap a("Clapdana");
    ScavTrap b("Scavdana");
    a.attack("the corrector");
    b.attack("the corrector");
    for(int i = 0; i<=10;i++ )
        a.beRepaired(1);
    for(int i = 0; i<=50;i++ )
        b.beRepaired(1);
    a.takeDamage(1000);
    b.takeDamage(1000);
    b.guardGate();
    a.attack("the corrector");
    b.attack("the corrector");
    return 0;
}