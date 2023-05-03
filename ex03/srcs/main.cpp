
#include "DiamondTrap.hpp"

// #define MY_TEST1_CLAP
// #define MY_TEST2_SCAV
// #define MY_TEST3_FRAG
#define MY_TEST4_DIAMOND

void myTest1Clap();
void myTest2Scav();
void myTest3Frag();
void myTest4Diamond();


int main(){
#ifdef MY_TEST1_CLAP
	myTest1Clap();
#endif
#ifdef MY_TEST2_SCAV
	myTest2Scav();
#endif
#ifdef MY_TEST3_FRAG
	myTest3Frag();
#endif
#ifdef MY_TEST4_DIAMOND
	myTest4Diamond();
#endif
	return 0;
}

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
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

	myPutStr("=== ", "d.attack(\"YadaYada-\")", PINK170);
	d.attack("YadaYada-");
	d.DebugEP(PINK183);

	myPutStr("=========", "===========", PINK198);
	myPutStr("TEST  ", "HitPoints ", PINK198);
	myPutStr("=========", "===========", PINK198);

	while (d.getHitPoints() > 0){
		myPutStr("=== ", "d.takeDamage(3)", PINK170);
		d.takeDamage(3);
		d.DebugHp(PINK183);
	}


	myPutStr("=========", "===========", PINK198);
	myPutStr("TEST  ", "No HitPoints ", PINK198);
	myPutStr("=========", "===========", PINK198);
	
	myPutStr("=== no hit points ", "d.takeDamage(1)", PINK170);
	d.takeDamage(1);
	d.DebugHp(PINK183);

	myPutStr("=== ", "d.attack(\"YadaYada-\")", PINK170);
	d.attack("YadaYada-");
	d.DebugHp(PINK183);

	myPutStr("", "=== end of scope", PINK170);
}


void myTest2Scav(){
	{

		myPutStr("=========", "===========", PINK208);
		myPutStr("MY_TEST2_SCAV ", " Scav           ", PINK208);
		myPutStr("=========", "===========", PINK208);

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
		myPutStr("=== ScavTrap d(\"CureBlack\");", "", PINK136);
		ScavTrap Sd("CureBlack");

		myPutStr("=========", "===========", PINK190);
		myPutStr("MY_TEST2_SCAV  ", " member variable", PINK190);
		myPutStr("=========", "===========", PINK190);

		myPutStr("=== Sa", "", PINK136);
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
		ScavTrap Sd("CureBlack");
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
		
		myPutStr("=== ", "Fd.attack(\"YadaYada-\")", PINK170);
		Sd.attack("YadaYada-");
		Sd.DebugEP(PINK183);

		myPutStr("=== ", "Sd.guardGate()", PINK136);
		Sd.guardGate();
	}
#endif

	myPutStr("=========", "===========", PINK198);
	myPutStr("TEST  ", "HitPoints ", PINK198);
	myPutStr("=========", "===========", PINK198);

	while (Sd.getHitPoints() > 0){
		myPutStr("=== ", "Sd.takeDamage(48)", PINK170);
		Sd.takeDamage(48);
		Sd.DebugHp(PINK183);
	}


	myPutStr("=========", "===========", PINK198);
	myPutStr("TEST  ", "No HitPoints ", PINK198);
	myPutStr("=========", "===========", PINK198);
	
	myPutStr("=== no hit points ", "Sd.takeDamage(1)", PINK170);
	Sd.takeDamage(1);
	Sd.DebugHp(PINK183);

	myPutStr("=== ", "Sd.attack(\"YadaYada-\")", PINK170);
	Sd.attack("YadaYada-");
	Sd.DebugEP(PINK183);

	myPutStr("", "=== end of scope", PINK136);
	}
}



void myTest3Frag(){
	{

		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST3_FRAG ", " Frag           ", PINK198);
		myPutStr("=========", "===========", PINK198);

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST3_FRAG ", " constructor called ", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=== FragTrap Fa;", "", PINK136);
		FragTrap Fa;
		myPutStr("=== FragTrap Fb(Fa);", "", PINK136);
		FragTrap Fb(Fa);
		myPutStr("=== FragTrap Fc;", "", PINK136);
		FragTrap Fc;
		myPutStr("=== Fc = Fb;", "", PINK136);
		Fc = Fb;
		myPutStr("=== Fb = Fc;", "", PINK136);
		Fb = Fc;
		myPutStr("=== FragTrap d(\"CureWhite\");", "", PINK136);
		FragTrap Fd("CureWhite");

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST3_FRAG  ", " member variable", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=== Fa", "", PINK183);
		Fa.DebugHp(PINK180);
		myPutStr("=== Fb", "", PINK183);
		Fb.DebugHp(PINK180);
		myPutStr("=== Fc", "", PINK183);
		Fc.DebugHp(PINK180);
		myPutStr("=== Fd", "", PINK183);
		Fd.DebugHp(PINK180);

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST3_FRAG  ", " member functions ", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=== ", "Fd.attack(\"AtaHuta-\")", PINK183);
		Fd.attack("AtaHuta-");
		Fd.DebugHp(PINK180);
		
		myPutStr("=== ", "Fd.takeDamage(3)", PINK183);
		Fd.takeDamage(3);
		Fd.DebugHp(PINK180);
		
		myPutStr("=== ", "Fd.beRepaired(4)", PINK183);
		Fd.beRepaired(4);
		Fd.DebugHp(PINK180);

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST3_FRAG  ", " mode", PINK201);
		myPutStr("=========", "===========", PINK201);
		myPutStr("=== ", "Fd.highFivesGuys()", PINK183);
		Fd.highFivesGuys();
		

// #define DEB_LOOP100
#ifdef DEB_LOOP100
	{
		FragTrap Fd("CureWhite");
		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST3_FRAG  ", "EnergyPoints ", PINK201);
		myPutStr("=========", "===========", PINK201);
		
		while (Fd.getEnergyPoints() > 0){
			myPutStr("=== ", "Fd.attack(\"AtaHuta-\")", PINK183);
			Fd.attack("AtaHuta-");
			Fd.DebugEP(PINK180);
			
			myPutStr("=== ", "Fd.beRepaired(2)", PINK183);
			Fd.beRepaired(2);
			Fd.DebugEP(PINK180);
		}

		myPutStr("=== ", "Fd.attack(\"YadaYada-\")", PINK170);
		Fd.attack("YadaYada-");
		Fd.DebugEP(PINK183);
	}
#endif


	myPutStr("=========", "===========", PINK198);
	myPutStr("TEST  ", "HitPoints ", PINK198);
	myPutStr("=========", "===========", PINK198);

	while (Fd.getHitPoints() > 0){
		myPutStr("=== ", "Fd.takeDamage(48)", PINK170);
		Fd.takeDamage(48);
		Fd.DebugHp(PINK183);
	}


	myPutStr("=========", "===========", PINK198);
	myPutStr("TEST  ", "No HitPoints ", PINK198);
	myPutStr("=========", "===========", PINK198);
	
	myPutStr("=== no hit points ", "Fd.takeDamage(1)", PINK170);
	Fd.takeDamage(1);
	Fd.DebugHp(PINK183);

	myPutStr("=== ", "Fd.attack(\"YadaYada-\")", PINK170);
	Fd.attack("YadaYada-");
	Fd.DebugEP(PINK183);

	myPutStr("", "=== end of scope", PINK183);
	}
}




void myTest4Diamond(){
	{

		myPutStr("=========", "===========", PINK198);
		myPutStr("MY_TEST4_Diamond ", " Frag           ", PINK198);
		myPutStr("=========", "===========", PINK198);

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST4_Diamond ", " constructor called ", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=== DiamondTrap Da;", "", PINK136);
		DiamondTrap Da;
		myPutStr("=== DiamondTrap Db(Da);", "", PINK136);
		DiamondTrap Db(Da);
		myPutStr("=== DiamondTrap Dc;", "", PINK136);
		DiamondTrap Dc;
		myPutStr("=== Dc = Db;", "", PINK136);
		Dc = Db;
		myPutStr("=== Db = Db;", "", PINK136);
		Db = Dc;
		myPutStr("=== DiamondTrap Dd(\"CureWhite\");", "", PINK136);
		DiamondTrap Dd("CureWhite");


		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST4_Diamond  ", " member variable", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=== Da", "", PINK183);
		Da.DebugHp(PINK180);
		myPutStr("=== Db", "", PINK183);
		Db.DebugHp(PINK180);
		myPutStr("=== Dc", "", PINK183);
		Dc.DebugHp(PINK180);
		myPutStr("=== Dd", "", PINK183);
		Dd.DebugHp(PINK180);


		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST4_Diamond  ", " member functions ", PINK201);
		myPutStr("=========", "===========", PINK201);

		myPutStr("=== ", "Dd.attack(\"MoyaMoya-\")", PINK183);
		Dd.ScavTrap::attack("MoyaMoya-");
		Dd.DebugHp(PINK180);
		
		myPutStr("=== ", "Dd.takeDamage(3)", PINK183);
		Dd.takeDamage(3);
		Dd.DebugHp(PINK180);
		
		myPutStr("=== ", "Dd.beRepaired(4)", PINK183);
		Dd.beRepaired(4);
		Dd.DebugHp(PINK180);

		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST4_Diamond  ", " mode", PINK201);
		myPutStr("=========", "===========", PINK201);
		myPutStr("=== ", "Dd.whoAmI()", PINK183);
		Dd.whoAmI();
		myPutStr("=== ", "Dd.highFivesGuys()", PINK183);
		Dd.highFivesGuys();
		myPutStr("=== ", "Dd.guardGate()", PINK136);
		Dd.guardGate();

		


// #define DEB_LOOP100
#ifdef DEB_LOOP100
	{
		DiamondTrap Dd("CureWhite");
		myPutStr("=========", "===========", PINK201);
		myPutStr("MY_TEST4_Diamond  ", "EnergyPoints ", PINK201);
		myPutStr("=========", "===========", PINK201);
		
		while (Dd.getEnergyPoints() > 0){
			myPutStr("=== ", "Dd.ScavTrap::attack(\"MoyaMoya-\")", PINK183);
			Dd.ScavTrap::attack("MoyaMoya-");
			Dd.DebugEP(PINK180);
			
			myPutStr("=== ", "Dd.beRepaired(2)", PINK183);
			Dd.beRepaired(2);
			Dd.DebugEP(PINK180);
		}
	}
#endif


	myPutStr("=========", "===========", PINK198);
	myPutStr("MY_TEST4_Diamond  ", "HitPoints ", PINK198);
	myPutStr("=========", "===========", PINK198);

	while (Dd.getHitPoints() > 0){
		myPutStr("=== ", "Dd.takeDamage(48)", PINK170);
		Dd.takeDamage(48);
		Dd.DebugHp(PINK183);
	}


	myPutStr("=========", "===========", PINK198);
	myPutStr("MY_TEST4_Diamond  ", "No HitPoints ", PINK198);
	myPutStr("=========", "===========", PINK198);
	
	myPutStr("=== no hit points ", "Dd.takeDamage(1)", PINK170);
	Dd.takeDamage(1);
	Dd.DebugHp(PINK183);

	myPutStr("=== ", "Dd.ScavTrap::attack(\"YadaYada-\")", PINK170);
	Dd.ScavTrap::attack("YadaYada-");
	Dd.DebugEP(PINK183);

	myPutStr("", "=== end of scope", PINK183);
	}
}

// ex03
// In this exercise, you will create a monster: a ClapTrap that’s half FragTrap, half ScavTrap. It will be named DiamondTrap, and it will inherit from both the FragTrap AND the ScavTrap. This is so risky!
// The DiamondTrap class will have a name private attribute. Give to this attribute exactly the same variable’s name (not talking about the robot’s name here) than the one in the ClapTrap base class.
// この演習では、半分が FragTrap で半分が ScavTrap である ClapTrap というモンスターを作成します。 これは DiamondTrap という名前になり、FragTrap と ScavTrap の両方から継承されます。 これはとても危険です！
// DiamondTrap クラスには name プライベート属性があります。 この属性には、ClapTrap 基本クラスのものとまったく同じ変数名 (ここではロボットの名前については言及していません) を指定します。

// To be more clear, here are two examples.
// If ClapTrap’s variable is name, give the name name to the one of the DiamondTrap.
// If ClapTrap’s variable is _name, give the name _name to the one of the DiamondTrap.
// より明確にするために、ここに 2 つの例を示します。
// ClapTrap の変数が name の場合、DiamondTrap の 1 つに name という名前を付けます。
// ClapTrap の変数が _name の場合、DiamondTrap の 1 つに _name という名前を付けます。

// Its attributes and member functions will be picked from either one of its parent classes:
// その属性とメンバー関数は、その親クラスのいずれかから選択されます。

// • Name, which is passed as parameter to a constructor
// • ClapTrap::name (parameter of the constructor + "_clap_name" suffix)
// • Hit points (FragTrap)
// • Energy points (ScavTrap)
// • Attack damage (FragTrap)
// • attack() (Scavtrap)
// • コンストラクターにパラメーターとして渡される名前
// • ClapTrap::name (コンストラクターのパラメーター + "_clap_name" サフィックス)
// • ヒット ポイント (FragTrap)
// •エネルギーポイント（ScavTrap）
// • 攻撃ダメージ (FragTrap)
// • attack() (スキャブトラップ)

// In addition to the special functions of both its parent classes, DiamondTrap will have
// its own special capacity:
// void whoAmI();
// This member function will display both its name and its ClapTrap name.
// Of course, the ClapTrap subobject of the DiamondTrap will be created once, and only once. Yes, there’s a trick.
// Again, add more tests to your program.
// 両方の親クラスの特別な機能に加えて、DiamondTrap には次の機能があります。
// 独自の特別な能力:
// void whoAmI();
// このメンバー関数は、その名前と ClapTrap 名の両方を表示します。
// もちろん、DiamondTrap の ClapTrap サブオブジェクトは一度だけ作成されます。 はい、コツがあります。
// 繰り返しますが、プログラムにさらにテストを追加してください。