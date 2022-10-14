#include <iostream>
#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
    this->_health = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << "FragTrap " << _name << " is alive!" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
    this->_health = 100;
    this->_energy = 100;
    this->_attack = 30;
    std::cout << "FragTrap " << _name << " is alive!" << std::endl;
    return ;
}

FragTrap::~FragTrap(void){
    std::cout << "FragTrap " << this->_name << " is dead!" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src._name){
    *this = src;
}

FragTrap& FragTrap::operator=(FragTrap const & rhs){
    if (this != &rhs){
        this->_attack = rhs._attack;
        this->_name = rhs._name;
        this->_health = rhs._health;
        this->_energy = rhs._energy;
    }
    return *this;
}

void FragTrap::highFivesGuys(){
    std::string r;
    std::cout << "Do you want a high five ? (yes/no)" << std::endl;
    std::cin >> r;
    if (r != "yes" && r != "no"){
        std::cout << "FragTrap didn't understand" << std::endl;
        return ;
    }
    if (r == "yes")
        std::cout << "FragTrap gives you a High Five!" << std::endl;
    else
        std::cout << "FragTrap gives you a High Five anyway!" << std::endl;
}