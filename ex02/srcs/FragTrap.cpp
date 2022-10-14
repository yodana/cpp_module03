#include <iostream>
#include "../includes/FragTrav.hpp"

FragTrav::FragTrav(std::string name): ClapTrap(name){
    this->_health = 100;
    this->_energy = 50;
    this->_attack = 30;
    std::cout << "FragTrav " << name << " is alive!" << std::endl;
    return ;
}

FragTrav::~FragTrav(void){
    std::cout << "FragTrav " << this->_name << " is dead!" << std::endl;
    return ;
}

FragTrav::FragTrav(FragTrav const &src): ClapTrap(src._name){
    *this = src;
}

FragTrav& FragTrav::operator=(FragTrav const & rhs){
    if (this != &rhs){
        this->_attack = rhs._attack;
        this->_name = rhs._name;
        this->_health = rhs._health;
        this->_energy = rhs._energy;
    }
    return *this;
}

void FragTrav::guardGate(){
    std::cout << "FragTrav mode Gate Keeper on" << std::endl;
}