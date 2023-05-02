#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class FragTrap:public ClapTrap{
private:

public:
	FragTrap();
	FragTrap(const FragTrap& obj);
	FragTrap& operator =(const FragTrap& rhs);
	~FragTrap();

	FragTrap(std::string s);

	void attack(const std::string& target);

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};

#endif

