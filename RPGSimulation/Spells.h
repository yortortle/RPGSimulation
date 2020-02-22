#pragma once
using namespace std;

class Spell
{
protected: 
	float dmg = 0;

	float AgiModifier;
	float FireModifier;
	float ChaosModifier;
	float DarkModifier;
	float FrostModifier;
	float SpellModifier;
	float RuneModifier;
	float MomentumModifier;

protected:
	Spell(Person& person)
	{
		cout << "spell has been called" << endl;
		person.printStats();
	}
	virtual ~Spell()
	{
		cout << "spell has been destroyed" << endl;
	}

public:
	const float& getDamage() const
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
	//I'm still not fully wrapping my head around using an initializer list which initializes the parent class constructor with person object. It works, and I get why somewhat,
	//but i'm not wrapping my head around it completely conceptually yet. Learncpp ch 12 needs re-read & practice.
	IceBarrage(Person& person)
		: Spell{ person }
	{
		cout << "ice barrage has been called" << endl;
		cout << "num?" << endl;

		AgiModifier = .7f;
		FireModifier = .8f;
		ChaosModifier = 1.2f;
		DarkModifier = 1.0f;
		FrostModifier = 2.0f;
		SpellModifier = 1.5f;
		RuneModifier = 1.0f;
		MomentumModifier = 1.7f;

		cout << calculateDmg(person) << endl;
	}
	~IceBarrage() override
	{
		cout << "ice has been destroyed" << endl;
	}

	void spellsay()
	{
		cout << "spellsay" << endl;
	}

	float calculateDmg(Person& person)
	{
		dmg =
			(AgiModifier * person.Agility) +
			(FireModifier * person.Firebending) +
			(ChaosModifier * person.Chaos) +
			(DarkModifier * person.Darkness) +
			(FrostModifier * person.FrostWork) +
			(SpellModifier * person.SpellCraft) +
			(RuneModifier * person.RuneCraft) +
			(MomentumModifier * person.Momentum);

		return dmg;
	}
};