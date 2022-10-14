#include "../includes/ClapTrap.hpp"
#include <iostream>

int main( void ) {
    ClapTrap b;
    ClapTrap a("yodana");
    a.attack("the corrector");
    for(int i = 0; i<=10;i++ )
        a.beRepaired(1);
    a.takeDamage(1000);
    a.attack("the corrector");
    return 0;
}