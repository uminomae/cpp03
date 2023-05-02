#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class ScavTrap:public ClapTrap{
private:

public:
	ScavTrap();
	ScavTrap(const ScavTrap& obj);
	ScavTrap& operator =(const ScavTrap& rhs);
	~ScavTrap();

	ScavTrap(std::string s);

	void attack(const std::string& target);

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void guardGate();
};

#endif

// ex01
// Because you can never have enough ClapTraps, you will now create a derived robot.
// It will be named ScavTrap and will inherit the constructors and destructor from ClapTrap. However, its constructors, destructor and attack() will print different messages.
// After all, ClapTraps are aware of their individuality.
// 十分な ClapTraps を持つことはできないため、ここで派生ロボットを作成します。
// これは ScavTrap という名前になり、ClapTrap からコンストラクターとデストラクタを継承します。 ただし、そのコンストラクタ、デストラクタ、および attack() は異なるメッセージを出力します。
// やはりClapTrapsは個性を意識しています。

// Note that proper construction/destruction chaining must be shown in your tests.
// When a ScavTrap is created, the program starts by building a ClapTrap. Destruction isin reverse order. Why?
// テストでは、適切な構築/破壊連鎖を示す必要があることに注意してください。
// ScavTrap が作成されると、プログラムは ClapTrap の構築から開始します。 破壊は逆順です。 なぜ？

// This member function will display a message informing that ScavTrap is now in Gatekeeper mode.Don’t forget to add more tests to your program.
// このメンバー関数は、ScavTrap が Gatekeeper モードになったことを通知するメッセージを表示します。プログラムにテストを追加することを忘れないでください。