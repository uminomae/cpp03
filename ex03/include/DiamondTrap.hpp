#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <string>

class DiamondTrap: public ScavTrap, public FragTrap{
private:
	std::string Name;
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap& obj);
	DiamondTrap& operator =(const DiamondTrap& rhs);
	~DiamondTrap();

	DiamondTrap(std::string s);

	void whoAmI();
	void DebugHp(std::string color);
	void DebugEP(std::string color);
};

#endif
