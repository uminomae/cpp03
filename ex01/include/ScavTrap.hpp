#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class ScavTrap:public ClapTrap{
private:

public:
	ScavTrap();
	ScavTrap(const ScavTrap& obj);
	ScavTrap& operator =(const ScavTrap& rhs);
	~ScavTrap();

	ScavTrap(std::string s);

	void attack(const std::string& target);

	void guardGate();
};

#endif
