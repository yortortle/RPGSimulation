#pragma once
using namespace std;

class Spell
{
protected: 
	float dmg = 0;

	//I don't necessarily get an error when I don't intialize these member variables immediately, and I don't see a reason to. Why does it warn me here when I plan on intializing them later on?

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

		calculateDmg(person);
	}
	~IceBarrage() override
	{
		cout << "ice barrage has been destroyed" << endl;
	}
};

class IceBlitz : public Spell
{

public:
	IceBlitz(Person& person)
		: Spell{ person }
	{
		AgiModifier = 1.2f;
		FireModifier = .8f;
		ChaosModifier = 1.4f;
		DarkModifier = 1.1f;
		FrostModifier = 1.5f;
		SpellModifier = 1.3f;
		RuneModifier = 1.3f;
		MomentumModifier = 2.0f;

		calculateDmg(person);
	}
};

class FireWave : public Spell
{

public:
	FireWave(Person& person)
		: Spell{ person }
	{
		AgiModifier = 0.8f;
		FireModifier = 2.0f;
		ChaosModifier = 1.2f;
		DarkModifier = 1.2f;
		FrostModifier = 0.5f;
		SpellModifier = 1.3f;
		RuneModifier = 1.6f;
		MomentumModifier = 1.2f;

		calculateDmg(person);
	}
};

class FireDance : public Spell
{

public:
	FireDance(Person& person)
		: Spell{ person }
	{
		AgiModifier = 2.0f;
		FireModifier = 1.5f;
		ChaosModifier = 0.8f;
		DarkModifier = 1.0f;
		FrostModifier = 0.5f;
		SpellModifier = 2.0f;
		RuneModifier = 1.2f;
		MomentumModifier = 2.0f;

		calculateDmg(person);
	}
};

class DarkDash : public Spell
{

public:
	DarkDash(Person& person)
		: Spell{ person }
	{
		AgiModifier = 2.0f;
		FireModifier = 0.5f;
		ChaosModifier = 1.6f;
		DarkModifier = 2.0f;
		FrostModifier = 0.5f;
		SpellModifier = 1.3f;
		RuneModifier = 1.6f;
		MomentumModifier = 2.0f;

		calculateDmg(person);
	}
};

class DarkPrism : public Spell
{

public:
	DarkPrism(Person& person)
		: Spell{ person }
	{
		AgiModifier = 0.5f;
		FireModifier = 1.5f;
		ChaosModifier = 1.0f;
		DarkModifier = 2.0f;
		FrostModifier = 0.7f;
		SpellModifier = 1.6f;
		RuneModifier = 1.2f;
		MomentumModifier = 0.9f;

		calculateDmg(person);
	}
};

class WindChant : public Spell
{

public:
	WindChant(Person& person)
		: Spell{ person }
	{
		AgiModifier = 2.0f;
		FireModifier = 1.2f;
		ChaosModifier = 0.5f;
		DarkModifier = 1.0f;
		FrostModifier = 1.2f;
		SpellModifier = 1.1f;
		RuneModifier = 0.5f;
		MomentumModifier = 2.0f;

		calculateDmg(person);
	}
};

class WindSlide : public Spell
{

public:
	WindSlide(Person& person)
		: Spell{ person }
	{
		AgiModifier = 1.2f;
		FireModifier = 1.8f;
		ChaosModifier = 1.0f;
		DarkModifier = 0.5f;
		FrostModifier = 1.2f;
		SpellModifier = 2.0f;
		RuneModifier = 2.0f;
		MomentumModifier = 0.7f;

		calculateDmg(person);
	}
};



