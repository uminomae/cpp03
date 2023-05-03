#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
:ClapTrap("Scav", 100, 50, 20){
	myPutStr("", "Derived class Scav : Default constructor called", PINK198);
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
:ClapTrap(s, 100, 50, 20){
	myPutStr("", "Derived class Scav : constructor with arguments called", PINK198);
}


unsigned int ScavTrap::getEnergyPoints(){
	return EnergyPoints;
}

void ScavTrap::attack(const std::string& target){
	if (HitPoints == 0){
		myPutStr(Name, "  no hit points. looks like a corpse.", PINK198);
		return ;
	}else if (EnergyPoints == 0){
		std::cout 
		<< Name
		<< " ran out of energy points" << std::endl;
		return;
	}
	EnergyPoints -= 1;
	std::cout 
	<< Name
	<< " attacks "
	<< target
	<< ", causing "
	<< AttackDamaged
	<< " points of damage!"
	<< std::endl;
}

void ScavTrap::guardGate(){
	if (EnergyPoints == 0){
		myPutStr(Name, " is zero energy points. But, is now in Gatekeeper mode", PINK198);
		return;
	}
	myPutStr(Name, " is now in Gatekeeper mode", PINK198);
}

