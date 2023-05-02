#include "FragTrap.hpp"

FragTrap::FragTrap(){
// :Name("Clap"),HitPoints(10),EnergyPoints(10),AttackDamaged(0),Max_HP(10){　←ほんとはここにこんなふうに入れたかった。
	myPutStr("", "Derived class Flag : Default constructor called", PINK198);
	Name = "Frag";
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamaged = 30;
	Max_HP = 100;
}

FragTrap::FragTrap(const FragTrap& obj){
	myPutStr("", "Derived class Flag : Copy constructor called", PINK198);
	*this = obj;
}

FragTrap& FragTrap::operator =(const FragTrap& rhs){
	myPutStr("", "Derived class Flag : Copy assignment operator called", PINK198);
	Name = rhs.Name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamaged = rhs.AttackDamaged;
	return *this;
}

FragTrap::~FragTrap(){
	myPutStr("", "Derived class Flag : Destructor called", PINK198);
}

FragTrap::FragTrap(std::string s)
{
	myPutStr("", "Derived class Flag : constructor with arguments called", PINK198);
	Name = s;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamaged = 30;
	Max_HP = 100;
}



void FragTrap::attack(const std::string& target){
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

void FragTrap::highFivesGuys(void){
	std::cout 
	<< Name
	<< " gave a high five"
	<< std::endl;
}


void FragTrap::takeDamage(unsigned int amount){
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

void FragTrap::beRepaired(unsigned int amount){
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