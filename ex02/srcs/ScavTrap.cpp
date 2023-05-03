#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	myPutStr("", "Derived class Scav : Default constructor called", PINK198);
	Name = "Scav";
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
	if (this != &rhs){
		Name = rhs.Name;
		HitPoints = rhs.HitPoints;
		EnergyPoints = rhs.EnergyPoints;
		AttackDamaged = rhs.AttackDamaged;
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	myPutStr(this->Name, " : Destructor called", PINK198);
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
	if (HitPoints == 0){
		myPutStr(Name, "  no hit points. looks like a corpse.", PINK198);
		return ;
	}else if (EnergyPoints == 0){
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
	<< Name
	<< " is now in Gatekeeper mode"
	<< std::endl;
}

