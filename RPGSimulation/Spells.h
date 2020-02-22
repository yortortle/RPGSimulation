#pragma once
using namespace std;

class Spell
{
protected: 
	int dmg;

protected:
	Spell(int dmg)
		: dmg{ dmg }
	{
		cout << "spell has been called" << endl;
	}
	virtual ~Spell()
	{
		cout << "spell has been destroyed" << endl;
	}

public:
	const int& getDamage() const
	{
		return dmg;
	}
	string spellsay() const 
	{
		return "say";
	}
};

class IceBarrage : public Spell
{
public:
	IceBarrage(int damage)
		: Spell{ damage }
	{
		cout << "ice barrage has been called" << endl;
	}
	~IceBarrage() override
	{
		cout << "ice has been destroyed" << endl;
	}

	void spellsay()
	{
		cout << "spellsay" << endl;
	}
};