#pragma once
using namespace std;

class Person
{
public:
	string name;
	int Level;
	float Agility;
	float Firebending;
	float Chaos;
	float Darkness;
	float FrostWork;
	float SpellCraft;
	float RuneCraft;
	float Momentum;
	
protected:
	//because chosenClass is entered once and I do not want it to change, it's (potentially) good practice to use a const to avoid further error and to take it in by reference to avoid copying it.
	Person(const string& chosenName, const int chosenLevel)
		: name{ chosenName }, Level{chosenLevel}
	{
		cout << "person has been called" << endl;
		Agility = 0.f;
		Firebending = 0.f;
		Chaos = 0.f;
		Darkness = 0.f;
		FrostWork = 0.f;
		SpellCraft = 0.f;
		RuneCraft = 0.f;
		Momentum = 0.f;
	}
	virtual ~Person()
	{
		cout << "person has been destroyed" << endl;
	}

public:
	const string& getName()
	{
		return name;
	}
	const void printStats()
	{
		cout << "Agility: " << Agility << " FireBending: " << Firebending << " Chaos: " << Chaos <<
			" Darkness: " << Darkness << " FrostWork: " << FrostWork << " SpellCraft: " << SpellCraft << " RuneCraft: " << RuneCraft << " Momentum: " << Momentum << endl;
	}
	const void getLevel()
	{
		cout << Level << endl;
	}
};

class Bladee : public Person
{
public:
	Bladee(const string& chosenName, const int& chosenLevel)
		: Person{ chosenName, chosenLevel }
	{
		cout << "drain :]]]" << endl;
		Agility = 35.f;
		Firebending = 60.f;
		Chaos = 70.f;
		Darkness = 70.f;
		FrostWork = 40.f;
		SpellCraft = 30.f;
		RuneCraft = 30.f;
		Momentum = 45.f;
	}

	~Bladee() override
	{
		cout << "bladee has been destroyed" << endl;
	}
};

class Drain : public Person
{
public:
	//honestly not sure exactly what effect i'm getting by setting int& and string&
	//as the arguments, is that to avoid copying new variables and save memory? Is this best practice? Needs more study.
	Drain(const string& chosenName, const int& chosenLevel)
		: Person{ chosenName, chosenLevel }
	{
		cout << "draiiiiin" << endl;
		Agility = 70.f;
		Firebending = 35.f;
		Chaos = 40.f;
		Darkness = 40.f;
		FrostWork = 70.f;
		SpellCraft = 45.f;
		RuneCraft = 40.f;
		Momentum = 35.f;
	}

	~Drain() override
	{
		cout << "Drain Gang :(" << endl;
	}
};


