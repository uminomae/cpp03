#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
:Name("Clap"),HitPoints(Max_HP),EnergyPoints(10),AttackDamaged(0){
	myPutStr("", "Default constructor called", PINK183);
}

ClapTrap::ClapTrap(const ClapTrap& obj){
	myPutStr("", "Copy constructor called", PINK183);
	*this = obj;//コピー代入演算子の呼び出し
}

ClapTrap& ClapTrap::operator =(const ClapTrap& rhs){
	myPutStr("", "Copy assignment operator called", PINK183);
	
	//objごと代入すると再帰するため、各変数を代入
	Name = rhs.Name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamaged = rhs.AttackDamaged;
	return *this;
}

ClapTrap::~ClapTrap(){
	myPutStr("", "Destructor called", PINK183);
}

ClapTrap::ClapTrap(std::string s)
:Name(s),HitPoints(Max_HP),EnergyPoints(10),AttackDamaged(0){
	myPutStr("", "constructor with arguments called", PINK183);
}



void ClapTrap::attack(const std::string& target){
	if (EnergyPoints == 0){
		std::cout << "ClapTrap " 
		<< Name
		<< " ran out of energy points" << std::endl;
		return;
	}
	EnergyPoints -= 1;
	std::cout 
	<< "ClapTrap "
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
	std::cout 
	<< "ClapTrap "
	<< Name
	<< " takes "
	<< amount
	<< " points of damage!"
	<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (EnergyPoints == 0){
		std::cout << "ClapTrap " 
		<< Name
		<< " ran out of energy points" << std::endl;
		return;
	}
	EnergyPoints -= 1;
	if (HitPoints + EnergyPoints >= Max_HP)
		HitPoints = Max_HP;
	else {
		HitPoints += amount;
	}
	std::cout 
	<< "ClapTrap "
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