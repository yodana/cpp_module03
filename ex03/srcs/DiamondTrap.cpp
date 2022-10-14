#include <iostream>
#include "../includes/DiamondTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/ClapTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("default name_clap_name"), _name("default name"){
    this->_health = FragTrap::_health;
    this->_energy = ScavTrap::_energy;
    this->_attack = FragTrap::_attack;
    std::cout << "DiamondTrap " << _name << " is alive!" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), _name(name){
    this->_health = FragTrap::_health;
    this->_energy = ScavTrap::_energy;
    this->_attack = FragTrap::_attack;
    std::cout << "DiamondTrap " << this->_name << " is alive!" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap(void){
    std::cout << "DiamondTrap " << this->_name << " is dead!" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src._name), ScavTrap(src._name), FragTrap(src._name){
    *this = src;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const & rhs){
    if (this != &rhs){
        this->_attack = rhs._attack;
        this->_name = rhs._name;
        this->_health = rhs._health;
        this->_energy = rhs._energy;
    }
    return *this;
}

void DiamondTrap::whoAmI(){
    std::cout << "Sous objet ClapTrap => " << ClapTrap::_name << " vs DiamondTrap name => " << this->_name << std::endl;
}