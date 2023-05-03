#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class FragTrap: virtual public ClapTrap{
private:

public:
	FragTrap();
	FragTrap(const FragTrap& obj);
	FragTrap& operator =(const FragTrap& rhs);
	~FragTrap();

	FragTrap(std::string s);

	void attack(const std::string& target);

	void highFivesGuys(void);
};

#endif

