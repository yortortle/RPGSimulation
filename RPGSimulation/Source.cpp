#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <ctime>
#include "People.h";
#include "Spells.h";
#include "People.h";
#include "Declarations.h";
using namespace std;


int main()
{
	srand(time(0));

	cout << "Would you like to view list of characters, view list of spells, or set up your interaction" << endl << "please enter: characters / spells / interact" << endl;
	cin >> option;

	if (option == "characters")
	{
		getCharacters();
		cout << endl;
		main();
	}
	else if (option == "spells")
	{
		getSpells();
		cout << endl;
		main();
	}
	else if (option == "interact")
	{
		cout << "please choose your character from: " << endl;
		getCharacters();
		cin >> chosenChar;
		chosenCharacter(chosenChar);
	}
	else 
	{
		cout << "Invalid answer, please start from the beginning" << endl << endl;
		main();
	}

}

//must pass in as reference

void getCharacters()
{
	// function which generates a vector of pointers and iterates through the vector to find the names and stats of the characters and delete the pointers freeing up the heap memory.
	//can't tell if this is good or bad to be honest. It sure gets the job done and the memory is freed up right as it's called.
	//There must be a better way to do something like this, wanted practice with making a vector of pointers to base class. Kind of enjoy the idea of it.
	Person* bladeptr = new Bladee("Bladee", 10);
	Person* drainPtr = new DrainGang("DrainGang", 10);
	Person* FrostPtr = new FrostPunk("FrostPunk", 10);
	Person* cosmicPtr = new CosmicCat("Cosmic Cat", 10);
	Person* deliberatePtr = new DeliberateDan("Dan", 10);
	Person* salvePtr = new Salve("Hero", 10);
	Person* gendoPtr = new IkariGendo("Gendo", 10);
	Person* cthuluPtr = new Cthulu("Bladee", 10);

	vector<Person*> peopleVector;

	peopleVector.push_back(bladeptr);
	peopleVector.push_back(drainPtr);
	peopleVector.push_back(FrostPtr);
	peopleVector.push_back(cosmicPtr);
	peopleVector.push_back(deliberatePtr);
	peopleVector.push_back(salvePtr);
	peopleVector.push_back(gendoPtr);
	peopleVector.push_back(cthuluPtr);

	cout << "The names of available characters are: " << endl;
	for (int i = 0; i < peopleVector.size(); i++)
	{
		cout << peopleVector[i]->getName() << endl;
		peopleVector[i]->printStats();
		delete peopleVector[i];
	}
}

void getSpells()
{
	//pretty bruteforce feeling way to do this but I wanted to print off the naems in a different way than I did for characters. 
	Bladee person("bladee", 1000);

	IceBarrage one(person);
	IceBlitz two(person);
	FireWave three(person);
	FireDance four(person);
	DarkDash five(person);
	DarkPrism six(person);
	WindChant seven(person);
	WindSlide eight(person);

	cout << one.getName() << endl;
	cout << two.getName() << endl;
	cout << three.getName() << endl;
	cout << four.getName() << endl;
	cout << five.getName() << endl;
	cout << six.getName() << endl;
	cout << seven.getName() << endl;
	cout << eight.getName() << endl;

	//spellList.push_back(IceBarrage one);
}

Spell* randSpell(int rand, Person person)
{
	//I can't believe this ended up working out. Very relieved.
	if (rand == 0)
	{
		return new IceBarrage(person);
	}
	else if (rand == 1)
	{
		return new IceBlitz(person);
	}
	else if (rand == 2)
	{
		return new FireWave(person);
	}
	else if (rand == 3)
	{
		return new FireDance(person);
	}
	else if (rand == 4)
	{
		return new DarkDash(person);
	}
	else if (rand == 5)
	{
		return new DarkPrism(person);
	}
	else if (rand == 6)
	{
		return new WindChant(person);
	}
	else if (rand == 7)
	{
		return new WindSlide(person);
	}
}

void chosenCharacter(string chosenChar)
{
	if (chosenChar == "bladee")
	{
		Bladee Character("hi", 1000);

		setSpell(Character);
	}
	else if (chosenChar == "drain gang")
	{
		DrainGang Character("hi", 1000);
		setSpell(Character);
	}
	else if (chosenChar == "frost punk")
	{
		FrostPunk Character("hi", 1000);
		setSpell(Character);
	}
	else if (chosenChar == "cosmic cat")
	{
		CosmicCat Character("hi", 1000);
		setSpell(Character);
	}
	else if (chosenChar == "dan")
	{
		DeliberateDan Character("hi", 1000);
		setSpell(Character);
	}
	else if (chosenChar == "salve")
	{
		Salve Character("hi", 1000);
		setSpell(Character);
	}
	else if (chosenChar == "gendo")
	{
		IkariGendo Character("hi", 1000);
		setSpell(Character);
	}
	else if (chosenChar == "cthulu")
	{
		Cthulu Character("hi", 1000);
		setSpell(Character);
	}
}

void setSpell(Person& person)
{
	int random = rand() % 8;
	int random2 = rand() % 8;
	ChosenSpell1 = randSpell(random, person);
	ChosenSpell2 = randSpell(random2, person);
	cout << "First spell is: " << ChosenSpell1->getName() << endl;
	cout << "Second Spell is: " << ChosenSpell2->getName() << endl;
	if (ChosenSpell1->getDamage() > ChosenSpell2->getDamage())
	{
		cout << ChosenSpell1->getName() << " is much greater for your character than " << ChosenSpell2->getName() << endl;
		cout << ChosenSpell1->getName() << " does " << ChosenSpell2->getDamage() - ChosenSpell1->getDamage() << " more damage than " << ChosenSpell2->getName() << endl << endl;
	}
	else
	{
		cout << ChosenSpell2->getName() << " is much greater for your character than " << ChosenSpell1->getName() << endl;
		cout << ChosenSpell2->getName() << " does " << ChosenSpell2->getDamage() - ChosenSpell1->getDamage() << " more damage than " << ChosenSpell2->getName() << endl << endl;
	}
}


//simulating damage curve in games with class selection, class attributes, and damage modifiers for specific spells that may or may not synergize with those classes.
//You will be able to make a character object which corresponds to class selection
// you will be able to declare a spell which takes in that class object as it's argument, and determine it's damage output
//you will be able to interact using an interaction object which will take two spell objects and print which spell has the higher damage output and maximized efficiency in terms of the 
//damage formula.

//rules:
//make functions const properly
//pass in by reference more into functions - try to understand when and where copying the variable versus not is better for efficiency. I will probably 
//not fully understand as i'm doing this, that's okay, it's to practice and understand; upon reflection it will make more sense.

//goals:
//implement virtual functions - check
//pure virtual function
//virtual destructors - check
//proper constructors - check
//initiliazer list - check
//passing in objects to declare a second object - check
//function which takes in references to objects. - check
//try to use const when I can and references when I need to - check
//use a vector, make sure not to copy data when iterating to save memory.
//complicated damage formulas and interactions - check somewhat
//library object which takes in a vector and has functions like (display spells, display people, etc); - no but I did make a vector of pointers.
//function which takes in a const reference to a vector and prints list of spells and their attributes