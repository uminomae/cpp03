#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
// :Name("Clap"),HitPoints(10),EnergyPoints(10),AttackDamaged(0),Max_HP(10){　←ほんとはここにこんなふうに入れたかった。
	myPutStr("", "Derived class Scav : Default constructor called", PINK198);
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamaged = 20;
	Max_HP = 100;
}

ScavTrap::ScavTrap(const ScavTrap& obj){
	myPutStr("", "Derived class Scav : Copy constructor called", PINK198);
	*this = obj;
}

ScavTrap& ScavTrap::operator =(const ScavTrap& rhs){
	myPutStr("", "Derived class Scav : Copy assignment operator called", PINK198);
	Name = rhs.Name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamaged = rhs.AttackDamaged;
	return *this;
}

ScavTrap::~ScavTrap(){
	myPutStr("", "Derived class Scav : Destructor called", PINK198);
}

ScavTrap::ScavTrap(std::string s)
{
	myPutStr("", "Derived class Scav : constructor with arguments called", PINK198);
	Name = s;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamaged = 20;
	Max_HP = 100;
}



void ScavTrap::attack(const std::string& target){
	std::string s = typeid(*this).name();
	if (EnergyPoints == 0){
		std::cout 
		<< s.substr(1, s.size()-1)
		<< " "
		<< Name
		<< " ran out of energy points" << std::endl;
		return;
	}
	EnergyPoints -= 1;
	std::cout 
	<< s.substr(1, s.size()-1)
	<< " "
	<< Name
	<< " attacks "
	<< target
	<< ", causing "
	<< AttackDamaged
	<< " points of damage!"
	<< std::endl;
}

void ScavTrap::guardGate(){
	std::cout 
	<< "ScavTrap is now in Gatekeeper mode"
	<< std::endl;
}



void ScavTrap::takeDamage(unsigned int amount){
	if (HitPoints < amount)
		HitPoints = 0;
	else
		HitPoints -= amount;
	std::string s = typeid(*this).name();
	std::cout 
	<< s.substr(1, s.size()-1)
	<< " "
	<< Name
	<< " takes "
	<< amount
	<< " points of damage!"
	<< std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
	std::string s = typeid(*this).name();
	if (EnergyPoints == 0){
		std::cout 
		<< s.substr(1, s.size()-1)
		<< " "
		<< Name
		<< " ran out of energy points" << std::endl;
		return;
	}
	EnergyPoints -= 1;
	if (HitPoints + amount >= this->Max_HP)
		HitPoints = Max_HP;
	else {
		HitPoints += amount;
	}
	std::cout 
	<< s.substr(1, s.size()-1)
	<< " "
	<< Name
	<< " regained "
	<< amount
	<< " hit points!"
	<< std::endl;
}