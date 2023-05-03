#include "FragTrap.hpp"

FragTrap::FragTrap()
:ClapTrap("Flag", 100, 100, 30){
	myPutStr("", "Derived class Frag : Default constructor called", PINK198);
}

FragTrap::FragTrap(const FragTrap& obj){
	myPutStr("", "Derived class Frag : Copy constructor called", PINK198);
	*this = obj;
}

FragTrap& FragTrap::operator =(const FragTrap& rhs){
	myPutStr("", "Derived class Frag : Copy assignment operator called", PINK198);
	if (this != &rhs){
		Name = rhs.Name;
		HitPoints = rhs.HitPoints;
		EnergyPoints = rhs.EnergyPoints;
		AttackDamaged = rhs.AttackDamaged;
	}
	return *this;
}

FragTrap::~FragTrap(){
	myPutStr(this->Name, " : Destructor called", PINK198);
}

FragTrap::FragTrap(std::string s)
:ClapTrap(s, 100, 100, 30){
	myPutStr("", "Derived class Frag : constructor with arguments called", PINK198);
}



void FragTrap::attack(const std::string& target){
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

void FragTrap::highFivesGuys(void){
	if (EnergyPoints == 0){
		myPutStr(Name, " Zero energy points. A high touch of the soul.", PINK198);
		return;
	}
	myPutStr(Name, " gave a high five", PINK198);
}
