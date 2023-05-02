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
	myPutStr("=== ClapTrap d(\"PreCure\");", "", PINK170);
	ClapTrap d("PreCure");

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

	myPutStr("=== ", "d.attack(\"YadaYada-\")", PINK170);
	d.attack("YadaYada-");
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
		myPutStr("=== ", "d.attack(\"YadaYada-\")", PINK170);
		d.attack("YadaYada-");
		d.DebugEP(PINK183);
		
		myPutStr("=== ", "d.beRepaired(2)", PINK170);
		d.beRepaired(2);
		d.DebugEP(PINK183);
	}

	myPutStr("", "--end--scope", PINK170);
}


void myTest2Scav(){
	{

		myPutStr("=========", "===========", PINK202);
		myPutStr("MY_TEST2_SCAV ", " Scav           ", PINK202);
		myPutStr("=========", "===========", PINK202);

		myPutStr("=========", "===========", PINK190);
		myPutStr("MY_TEST2_SCAV ", " constructor called ", PINK190);
		myPutStr("=========", "===========", PINK190);

		myPutStr("=== ScavTrap Sa;", "", PINK136);
		ScavTrap Sa;
		myPutStr("=== ScavTrap Sb(Sa);", "", PINK136);
		ScavTrap Sb(Sa);
		myPutStr("=== ScavTrap Sc;", "", PINK136);
		ScavTrap Sc;
		myPutStr("=== Sc = Sb;", "", PINK136);
		Sc = Sb;
		myPutStr("=== ScavTrap d(\"PreCureAce\");", "", PINK136);
		ScavTrap Sd("PreCureAce");

		myPutStr("=========", "===========", PINK190);
		myPutStr("MY_TEST2_SCAV  ", " member variable", PINK190);
		myPutStr("=========", "===========", PINK190);

		myPutStr("=== a", "", PINK136);
		Sa.DebugHp(PINK180);
		myPutStr("=== Sb", "", PINK136);
		Sb.DebugHp(PINK180);
		myPutStr("=== Sc", "", PINK136);
		Sc.DebugHp(PINK180);
		myPutStr("=== Sd", "", PINK136);
		Sd.DebugHp(PINK180);

		myPutStr("=========", "===========", PINK190);
		myPutStr("MY_TEST2_SCAV  ", " member functions ", PINK190);
		myPutStr("=========", "===========", PINK190);

		myPutStr("=== ", "Sd.attack(\"MesoMeso-\")", PINK136);
		Sd.attack("MesoMeso-");
		Sd.DebugHp(PINK180);
		
		myPutStr("=== ", "Sd.takeDamage(3)", PINK136);
		Sd.takeDamage(3);
		Sd.DebugHp(PINK180);
		
		myPutStr("=== ", "Sd.beRepaired(4)", PINK136);
		Sd.beRepaired(4);
		Sd.DebugHp(PINK180);

		myPutStr("=========", "===========", PINK190);
		myPutStr("MY_TEST2_SCAV  ", " mode", PINK190);
		myPutStr("=========", "===========", PINK190);
		myPutStr("=== ", "Sd.guardGate()", PINK136);
		Sd.guardGate();
		


// #define DEB_LOOP50
#ifdef DEB_LOOP50
	{
		ScavTrap Sd("PreCureAce");
		myPutStr("=========", "===========", PINK190);
		myPutStr("MY_TEST2_SCAV  ", "EnergyPoints ", PINK190);
		myPutStr("=========", "===========", PINK190);
		
		while (Sd.getEnergyPoints() > 0){
			myPutStr("=== ", "Sd.attack(\"MesoMeso-\")", PINK136);
			Sd.attack("MesoMeso-");
			Sd.DebugEP(PINK180);
			
			myPutStr("=== ", "Sd.beRepaired(2)", PINK136);
			Sd.beRepaired(2);
			Sd.DebugEP(PINK180);
		}
	}
#endif


		myPutStr("", "--end--scope", PINK136);
	}
}

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}

