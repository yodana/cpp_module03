#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <iostream>

class ClapTrap{
    public:
        ClapTrap(std::string);
        ClapTrap();
        ~ClapTrap(void);
        ClapTrap(ClapTrap const &src);
        ClapTrap & operator=(ClapTrap const & rhs);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
    protected:
        std::string _name;
        int _health;
        int _energy;
        int _attack;
};

#endif