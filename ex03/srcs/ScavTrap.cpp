#include <iostream>
#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
    this->_health = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout << "ScavTrap " << _name << " is alive!" << std::endl;
    return ;
}

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

void ScavTrap::attack(const std::string &target){
    if (this->_energy <= 0 || this->_health <= 0){
        std::cout << "ScavTrap " << this->_name << " doesn't have energy or life!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
    this->_energy = this->_energy - 1;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap mode Gate Keeper on" << std::endl;
}