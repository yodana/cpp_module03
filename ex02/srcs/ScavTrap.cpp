#include <iostream>
#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
    this->_health = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << "ScavTrap " << name << " is alive!" << std::endl;
    return ;
}

ScavTrap::~ScavTrap(void){
    std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
    return ;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src._name){
    *this = src;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & rhs){
    if (this != &rhs){
        this->_attack = rhs._attack;
        this->_name = rhs._name;
        this->_health = rhs._health;
        this->_energy = rhs._energy;
    }
    return *this;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap mode Gate Keeper on" << std::endl;
}