#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	myPutStr("", "Derived class Diamond : Default constructor called", PINK208);
	Name = "Diamond_" + ClapTrap::Name;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamaged = 30;
	Max_HP = 100;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj){
	myPutStr("", "Derived class Diamond : Copy constructor called", PINK208);
	*this = obj;
}

DiamondTrap& DiamondTrap::operator =(const DiamondTrap& rhs){
	if (this != &rhs){
		myPutStr("", "Derived class Diamond : Copy assignment operator called", PINK208);
		Name = rhs.Name;
		HitPoints = rhs.HitPoints;
		EnergyPoints = rhs.EnergyPoints;
		AttackDamaged = rhs.AttackDamaged;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(){
	myPutStr(Name, " : Destructor called", PINK208);
}

DiamondTrap::DiamondTrap(std::string s){
	myPutStr("", "Derived class Diamond : constructor with arguments called", PINK208);
	Name = s;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamaged = 30;
	Max_HP = 100;
}


void DiamondTrap::whoAmI(void){
	myPutStr(Name, " " + ClapTrap::Name, PINK198);
}

void DiamondTrap::DebugHp(std::string color){
	std::cout << color 
	<< "Name\t\t: " << Name << "\n"
	<< PINK198
	<< "HitPoints\t: " << HitPoints << "\n"
	<< color 
	<< "EnergyPoints\t: " << EnergyPoints << "\n"
	<< "AttackDamaged\t: " << AttackDamaged 
	<< RESET_COLOR << std::endl;
}

void DiamondTrap::DebugEP(std::string color){
	std::cout << color 
	<< "Name\t\t: " << Name << "\n"
	<< "HitPoints\t: " << HitPoints << "\n"
	<< PINK198
	<< "EnergyPoints\t: " << EnergyPoints << "\n"
	<< color 
	<< RESET_COLOR << std::endl;
}