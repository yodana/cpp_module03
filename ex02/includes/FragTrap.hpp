#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include <iostream>

class FragTrap{
    public:
        FragTrap(std::string);
        ~FragTrap(void);
        FragTrap(FragTrap const &src);
        FragTrap & operator=(FragTrap const & rhs);
        
};

#endif