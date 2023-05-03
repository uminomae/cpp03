#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
private:
	std::string Name;
	unsigned int HitPoints;
	unsigned int EnergyPoints;
	unsigned int AttackDamaged;

	static const unsigned int Max_HP = 10;
public:
	ClapTrap();
	ClapTrap(const ClapTrap& obj);
	ClapTrap& operator =(const ClapTrap& rhs);
	~ClapTrap();

	ClapTrap(std::string s);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int getEnergyPoints();
	int getHitPoints();
	std::string myGetClassName();
	void DebugHp(std::string color);
	void DebugEP(std::string color);
};

void myPutStr(std::string s1, std::string s2, std::string color);

const std::string PINK170 = "\033[38;5;170m";
const std::string PINK183 = "\033[38;5;183m";
const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";
const std::string RED = "\033[38;5;52m";
const std::string RESET_COLOR = "\033[m";

#endif

