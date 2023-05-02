#include "ClapTrap.hpp"

#define MY_TEST
void myTest();


int main(){
#ifdef MY_TEST
	myTest();
#endif
	return 0;
}


void myTest(){

	myPutStr("=========", "===========", PINK201);
	myPutStr("MY_TEST  ", "           ", PINK201);
	myPutStr("=========", "===========", PINK201);

	myPutStr("=========", "===========", PINK198);
	myPutStr("TEST ", " constructor called ", PINK198);
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
	myPutStr("TEST  ", " member variable", PINK198);
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
	myPutStr("TEST  ", " member functions ", PINK198);
	myPutStr("=========", "===========", PINK198);

	myPutStr("=== ", "d.attack(\"yada-yada-\")", PINK170);
	d.attack("yada-yada-");
	d.DebugHp(PINK183);
	
	myPutStr("=== ", "d.takeDamage(3)", PINK170);
	d.takeDamage(3);
	d.DebugHp(PINK183);
	
	myPutStr("=== ", "d.beRepaired(2)", PINK170);
	d.beRepaired(2);
	d.DebugHp(PINK183);
	

	myPutStr("=========", "===========", PINK198);
	myPutStr("TEST  ", "EnergyPoints ", PINK198);
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


void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}

