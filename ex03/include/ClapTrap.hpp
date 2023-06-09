#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <typeinfo>

class ClapTrap{
protected:
	std::string Name;
	unsigned int HitPoints;
	unsigned int EnergyPoints;
	unsigned int AttackDamaged;

	unsigned int Max_HP;
public:
	ClapTrap();
	ClapTrap(const ClapTrap& obj);
	ClapTrap& operator =(const ClapTrap& rhs);
	~ClapTrap();
	ClapTrap(std::string s);
	ClapTrap(std::string Name, unsigned int Hp, unsigned int Ep, unsigned int Ad);

	void attack(const std::string& target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	unsigned int getEnergyPoints();
	unsigned int getHitPoints();
	unsigned int getAtackDamaged();

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

const std::string PINK136 = "\033[38;5;136m";
const std::string PINK180 = "\033[38;5;180m";
const std::string PINK190 = "\033[38;5;190m";
const std::string PINK208 = "\033[38;5;208m";

#endif

