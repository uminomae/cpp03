#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#define MY_TEST1_CLAP
#define MY_TEST2_SCAV

void myTest1Clap();
void myTest2Scav();


int main(){
#ifdef MY_TEST1_CLAP
	myTest1Clap();
#endif
#ifdef MY_TEST2_SCAV
	myTest2Scav();
#endif
	return 0;
}

void myTest1Clap(){

	myPutStr("=========", "===========", PINK201);
	myPutStr("MY_TEST1_CLAP  ", "           ", PINK201);
	myPutStr("=========", "===========", PINK201);

	myPutStr("=========", "===========", PINK198);
	myPutStr("MY_TEST1_CLAP ", " constructor called ", PINK198);
	myPutStr("=========", "===========", PINK198);

	myPutStr("=== ClapTrap a;", "", PINK170);
	ClapTrap a;
	myPutStr("=== ClapTrap b(a);", "", PINK170);
	ClapTrap b(a);
	myPutStr("=== ClapTrap c;", "", PINK170);
	ClapTrap c;
	myPutStr("=== c = b;", "", PINK170);
	c = b;
	myPutStr("=== ClapTrap d(\"pre-cure\");", "", PINK170);
	ClapTrap d("pre-cure");

	myPutStr("=========", "===========", PINK198);
	myPutStr("MY_TEST1_CLAP  ", " member variable", PINK198);
	myPutStr("=========", "===========", PINK198);
	myPutStr("=== a", "", PINK170);
	a.DebugHp(PINK183);
	myPutStr("=== b", "", PINK170);
	b.DebugHp(PINK183);
	myPutStr("=== c", "", PINK170);
	c.DebugHp(PINK183);
	myPutStr("=== d", "", PINK170);
	d.DebugHp(PINK183);

	myPutStr("=========", "===========", PINK198);
	myPutStr("MY_TEST1_CLAP  ", " member functions ", PINK198);
	myPutStr("=========", "===========", PINK198);

	myPutStr("=== ", "d.attack(\"yada-yada-\")", PINK170);
	d.attack("yada-yada-");
	d.DebugHp(PINK183);
	
	myPutStr("=== ", "d.takeDamage(3)", PINK170);
	d.takeDamage(3);
	d.DebugHp(PINK183);
	
	myPutStr("=== ", "d.beRepaired(4)", PINK170);
	d.beRepaired(4);
	d.DebugHp(PINK183);
	

	myPutStr("=========", "===========", PINK198);
	myPutStr("MY_TEST1_CLAP  ", "EnergyPoints ", PINK198);
	myPutStr("=========", "===========", PINK198);
	
	while (d.getEnergyPoints() > 0){
		myPutStr("=== ", "d.attack(\"yada-yada-\")", PINK170);
		d.attack("yada-yada-");
		d.DebugEP(PINK183);
		
		myPutStr("=== ", "d.beRepaired(2)", PINK170);
		d.beRepaired(2);
		d.DebugEP(PINK183);
	}

	myPutStr("", "--end--scope", PINK170);
}


void myTest2Scav(){
	{

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST2_SCAV ", " Scav           ", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST2_SCAV ", " constructor called ", PINK198);
		myPutStr("=========", "===========", PINK198);

		myPutStr("=== ScavTrap Sa;", "", PINK170);
		ScavTrap Sa;
		myPutStr("=== ScavTrap Sb(Sa);", "", PINK170);
		ScavTrap Sb(Sa);
		myPutStr("=== ScavTrap Sc;", "", PINK170);
		ScavTrap Sc;
		myPutStr("=== Sc = Sb;", "", PINK170);
		Sc = Sb;
		myPutStr("=== ScavTrap d(\"pre-cure\");", "", PINK170);
		ScavTrap Sd("pre-cure");

		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST2_SCAV  ", " member variable", PINK198);
		myPutStr("=========", "===========", PINK198);

		myPutStr("=== a", "", PINK170);
		Sa.DebugHp(PINK183);
		myPutStr("=== Sb", "", PINK170);
		Sb.DebugHp(PINK183);
		myPutStr("=== Sc", "", PINK170);
		Sc.DebugHp(PINK183);
		myPutStr("=== Sd", "", PINK170);
		Sd.DebugHp(PINK183);

		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST2_SCAV  ", " member functions ", PINK198);
		myPutStr("=========", "===========", PINK198);

		myPutStr("=== ", "Sd.attack(\"yada-yada-\")", PINK170);
		Sd.attack("yada-yada-");
		Sd.DebugHp(PINK183);
		
		myPutStr("=== ", "Sd.takeDamage(3)", PINK170);
		Sd.takeDamage(3);
		Sd.DebugHp(PINK183);
		
		myPutStr("=== ", "Sd.beRepaired(4)", PINK170);
		Sd.beRepaired(4);
		Sd.DebugHp(PINK183);

		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST2_SCAV  ", " mode", PINK198);
		myPutStr("=========", "===========", PINK198);
		myPutStr("=== ", "Sd.guardGate()", PINK170);
		Sd.guardGate();
		


// #define DEB_LOOP50
#ifdef DEB_LOOP50
	{
		ScavTrap Sd("pre-cure");
		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST2_SCAV  ", "EnergyPoints ", PINK198);
		myPutStr("=========", "===========", PINK198);
		
		while (Sd.getEnergyPoints() > 0){
			myPutStr("=== ", "Sd.attack(\"yada-yada-\")", PINK170);
			Sd.attack("yada-yada-");
			Sd.DebugEP(PINK183);
			
			myPutStr("=== ", "Sd.beRepaired(2)", PINK170);
			Sd.beRepaired(2);
			Sd.DebugEP(PINK183);
		}
	}
#endif


		myPutStr("", "--end--scope", PINK170);
	}
}

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}

