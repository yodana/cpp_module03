#include <iostream>
#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_name(name),_health(10),_energy(10), _attack(0){
    std::cout << "ClapTrap " << name << " is alive!" << std::endl;
    return ;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
    return ;
}


ClapTrap::ClapTrap(ClapTrap const &src){
    *this = src;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs){
    if (this != &rhs){
        this->_attack = rhs._attack;
        this->_name = rhs._name;
        this->_health = rhs._health;
        this->_energy = rhs._energy;
    }
    return *this;
}

void ClapTrap::attack(const std::string &target){
    if (this->_energy <= 0 || this->_health <= 0){
        std::cout << "ClapTrap " << this->_name << " doesn't have energy or life!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
    this->_energy = this->_energy - 1;
}


void ClapTrap::takeDamage(unsigned int amount){
    if (this->_health <= 0){
        std::cout << "ClapTrap " << this->_name << " doesn't have health!" << std::endl;
        return ;
    }
    else{
        std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
        this->_health = this->_energy - amount;
        if (this->_health <= 0){
            std::cout << "ClapTrap " << this->_name << " shuts at 0 health!" << std::endl;
        }
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->_energy <= 0 || this->_health <= 0){
        std::cout << "ClapTrap " << this->_name << " doesn't have energy or life!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " recovers 1 hp!" << std::endl;
    this->_energy = this->_energy - 1;
    this->_health = this->_health + amount;
}