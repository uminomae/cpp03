#include "ClapTrap.hpp"

#define MY_TEST
void myTest();


int main(){
#ifdef MY_TEST
	myTest();
#endif
	return 0;
}


void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
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
	myPutStr("=== ClapTrap d(\"PreCure\");", "", PINK170);
	ClapTrap d("PreCure");

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
	myPutStr("TEST  ", "EnergyPoints ", PINK198);
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

	myPutStr("=== end of scope", "", PINK170);
}


// First, you have to implement a class! How original!
// It will be called ClapTrap and will have the following private attributes initialized to the values specified in brackets:
// まず、クラスを実装する必要があります。 なんとオリジナル！
// これは ClapTrap と呼ばれ、角かっこで指定された値に初期化された次のプライベート属性を持ちます。

// • Name, which is passed as parameter to a constructor
// • Hit points (10), represent the health of the ClapTrap
// • Energy points (10)
// • Attack damage (0)

// Add the following public member functions so the ClapTrap looks more realistic:
// 次のパブリック メンバー関数を追加して、ClapTrap がより現実的に見えるようにします。

// • void attack(const std::string& target);
// • void takeDamage(unsigned int amount);
// • void beRepaired(unsigned int amount);

// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
// When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points or energy points left.
// ClapTrack が攻撃すると、ターゲットは <attack damage> のヒット ポイントを失います。
// ClapTrap が自己修復すると、ヒット ポイントが <amount> 回復します。 攻撃と修復には、それぞれ 1 エネルギー ポイントが必要です。 もちろん、ヒット ポイントやエネルギー ポイントが残っていない場合、ClapTrap は何もできません。


// In all of these member functions, you have to print a message to describe what happens. For example, the attack() function may display something like (of course, without the angle brackets):
// ClapTrap <name> attacks <target>, causing <damage> points of damage!

// これらすべてのメンバー関数で、何が起こるかを説明するメッセージを出力する必要があります。 たとえば、attack() 関数は次のように表示される場合があります (もちろん、山括弧なしで):
// ClapTrap <name> が <target> を攻撃し、<damage> ポイントのダメージを与えます!

// The constructors and destructor must also display a message, so your peer-evaluators can easily see they have been called.
// コンストラクタとデストラクタもメッセージを表示する必要があるため、ピア評価者はそれらが呼び出されたことを簡単に確認できます。

// Implement and turn in your own tests to ensure your code works as expected.
// 独自のテストを実装して有効にし、コードが期待どおりに機能することを確認します。