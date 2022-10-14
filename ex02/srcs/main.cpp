#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include <iostream>
#include "../includes/FragTrap.hpp"

int main( void ) {
    ClapTrap a("Clapdana");
    ScavTrap b("Scavdana");
    FragTrap c("Frapdana");
    FragTrap d;
    a.attack("the corrector");
    b.attack("the corrector");
    c.attack("the corrector");
    for(int i = 0; i<=10;i++ )
        a.beRepaired(1);
    for(int i = 0; i<=50;i++ )
        b.beRepaired(1);
    for(int i = 0; i<=50;i++ )
        c.beRepaired(1);
    a.takeDamage(1000);
    b.takeDamage(1000);
    c.takeDamage(1000);
    c.highFivesGuys();
    b.guardGate();
    a.attack("the corrector");
    b.attack("the corrector");
    c.attack("the corrector");
    return 0;
}