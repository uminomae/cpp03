#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#define MY_TEST1_CLAP
#define MY_TEST2_SCAV
#define MY_TEST3_FRAG

void myTest1Clap();
void myTest2Scav();
void myTest3Frag();


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
	d.DebugEP(PINK183);

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
	}
#endif

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
		


#define DEB_LOOP100
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



// Making ClapTraps is probably starting to get on your nerves.
// ClapTraps を作成すると、おそらく神経質になり始めているでしょう。

// Now, implement a FragTrap class that inherits from ClapTrap. It is very similar to ScavTrap. However, its construction and destruction messages must be different. Proper construction/destruction chaining must be shown in your tests. When a FragTrap is created, the program starts by building a ClapTrap. Destruction is in reverse order.
// ここで、ClapTrap を継承する FragTrap クラスを実装します。 ScavTrap と非常によく似ています。 ただし、その構築メッセージと破棄メッセージは異なる必要があります。 テストでは、適切な構築/破壊連鎖を示す必要があります。 FragTrap が作成されると、プログラムは ClapTrap の作成から開始します。 破壊は逆順です。

// Same things for the attributes, but with different values this time:
// • Name, which is passed as parameter to a constructor
// • Hit points (100), represent the health of the ClapTrap
// • Energy points (100)
// • Attack damage (30)
// FragTrap has a special capacity too:
// void highFivesGuys(void);

// 属性も同じですが、今回は値が異なります。
// • コンストラクターにパラメーターとして渡される名前
// • ヒット ポイント (100)、ClapTrap のヘルスを表します
// •エネルギーポイント（100）
// • 攻撃ダメージ (30)
// FragTrap にも特別な機能があります。
// void highFivesGuys(void);

// This member function displays a positive high fives request on the standard output.
// Again, add more tests to your program.
// このメンバー関数は、標準出力にポジティブ ハイタッチ リクエストを表示します。
// 繰り返しますが、プログラムにさらにテストを追加してください。