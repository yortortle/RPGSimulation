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
	
public:
	//because chosenClass is entered once and I do not want it to change, it's (potentially) good practice to use a const to avoid further error and to take it in by reference to avoid copying it.
	Person(const string& chosenName, const int chosenLevel)
		: name{ chosenName }, Level{chosenLevel}
	{
		//cout << "person has been called" << endl;
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
		//cout << "person has been destroyed" << endl;
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
		//cout << "drain :]]]" << endl;
		Agility = 35.f;
		Firebending = 60.f;
		Chaos = 70.f;
		Darkness = 70.f;
		FrostWork = 40.f;
		SpellCraft = 30.f;
		RuneCraft = 30.f;
		Momentum = 45.f;
	}
};

class DrainGang : public Person
{
public:
	//need more study on using references and const in parameter list
	DrainGang(const string& chosenName, const int& chosenLevel)
		: Person{ chosenName, chosenLevel }
	{
		//cout << "draiiiiin" << endl;
		Agility = 70.f;
		Firebending = 35.f;
		Chaos = 40.f;
		Darkness = 40.f;
		FrostWork = 70.f;
		SpellCraft = 45.f;
		RuneCraft = 40.f;
		Momentum = 35.f;
	}
};

class FrostPunk : public Person
{
public:
	FrostPunk(const string& chosenName, const int& chosenLevel)
		: Person{ chosenName, chosenLevel }
	{
		Agility = 60.f;
		Firebending = 20.f;
		Chaos = 50.f;
		Darkness = 55.f;
		FrostWork = 70.f;
		SpellCraft = 35.f;
		RuneCraft = 30.f;
		Momentum = 70.f;
	}
};

class CosmicCat : public Person
{
public:
	CosmicCat(const string& chosenName, const int& chosenLevel)
		: Person{ chosenName, chosenLevel }
	{
		cout << "nyaa~" << endl;
		Agility = 80.f;
		Firebending = 50.f;
		Chaos = 50.f;
		Darkness = 30.f;
		FrostWork = 30.f;
		SpellCraft = 50.f;
		RuneCraft = 50.f;
		Momentum = 50.f;
	}
};

class DeliberateDan : public Person
{
public:
	DeliberateDan(const string& chosenName, const int& chosenLevel)
		: Person{ chosenName, chosenLevel }
	{
		//cout << "Take your life seriously" << endl;
		Agility = 50.f;
		Firebending = 75.f;
		Chaos = 75.f;
		Darkness = 75.f;
		FrostWork = 30.f;
		SpellCraft = 30.f;
		RuneCraft = 40.f;
		Momentum = 50.f;
	}
};

class Salve : public Person
{
public:
	Salve(const string& chosenName, const int& chosenLevel)
		: Person{ chosenName, chosenLevel }
	{
		Agility = 80.f;
		Firebending = 35.f;
		Chaos = 35.f;
		Darkness = 30.f;
		FrostWork = 60.f;
		SpellCraft = 75.f;
		RuneCraft = 75.f;
		Momentum = 50.f;
	}
};

class IkariGendo : public Person
{
public:
	IkariGendo(const string& chosenName, const int& chosenLevel)
		: Person{ chosenName, chosenLevel }
	{
		Agility = 50.f;
		Firebending = 75.f;
		Chaos = 90.f;
		Darkness = 75.f;
		FrostWork = 35.f;
		SpellCraft = 40.f;
		RuneCraft = 30.f;
		Momentum = 45.f;
	}
};

class Cthulu : public Person
{
public:
	Cthulu(const string& chosenName, const int& chosenLevel)
		: Person{ chosenName, chosenLevel }
	{
		cout << "nyaa~" << endl;
		Agility = 30.f;
		Firebending = 30.f;
		Chaos = 90.f;
		Darkness = 90.f;
		FrostWork = 30.f;
		SpellCraft = 30.f;
		RuneCraft = 30.f;
		Momentum = 20.f;
	}
};







