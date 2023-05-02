#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:Name("Clap"),HitPoints(10),EnergyPoints(10),AttackDamaged(0),Max_HP(10){
	myPutStr("", "Base class Clap : Default constructor called", PINK183);
}

ClapTrap::ClapTrap(const ClapTrap& obj){
	myPutStr("", "Base class Clap : Copy constructor called", PINK183);
	*this = obj;
}

ClapTrap& ClapTrap::operator =(const ClapTrap& rhs){
	myPutStr("", "Base class Clap : Copy assignment operator called", PINK183);
	Name = rhs.Name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamaged = rhs.AttackDamaged;
	return *this;
}

ClapTrap::~ClapTrap(){
	myPutStr("", "Base class Clap : Destructor called", PINK183);
}

ClapTrap::ClapTrap(std::string s)
:Name(s),HitPoints(10),EnergyPoints(10),AttackDamaged(0),Max_HP(10){
	myPutStr("", "Base class Clap : constructor with arguments called", PINK183);
}



void ClapTrap::attack(const std::string& target){
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

void ClapTrap::takeDamage(unsigned int amount){
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

void ClapTrap::beRepaired(unsigned int amount){
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


int ClapTrap::getEnergyPoints(){
	return EnergyPoints;
}

void ClapTrap::DebugHp(std::string color){
	std::cout << color 
	<< "Name\t\t: " << Name << "\n"
	<< PINK198
	<< "HitPoints\t: " << HitPoints << "\n"
	<< color 
	<< "EnergyPoints\t: " << EnergyPoints << "\n"
	<< "AttackDamaged\t: " << AttackDamaged 
	<< RESET_COLOR << std::endl;
}

void ClapTrap::DebugEP(std::string color){
	std::cout << color 
	<< "Name\t\t: " << Name << "\n"
	<< "HitPoints\t: " << HitPoints << "\n"
	<< PINK198
	<< "EnergyPoints\t: " << EnergyPoints << "\n"
	<< color 
	<< "AttackDamaged\t: " << AttackDamaged 
	<< RESET_COLOR << std::endl;
}