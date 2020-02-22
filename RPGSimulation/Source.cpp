#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "People.h";
#include "Spells.h";
#include "People.h";
#include "Declarations.h";
using namespace std;

int main()
{
	cout << "Would you like to view list of characters, view list of spells, or set up your interaction" << endl;
	cin >> option;

	getCharacters();
}

//must pass in as reference
void interaction(Spell &SpellOne, Spell &SpellTwo)
{

}

void selection()
{

}

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

//simulating damage curve in games with class selection, class attributes, and damage modifiers for specific spells that may or may not synergize with those classes.
//You will be able to make a character object which corresponds to class selection
// you will be able to declare a spell which takes in that class object as it's argument, and determine it's damage output
//you will be able to interact using an interaction object which will take two spell objects and print which spell has the higher damage output and maximized efficiency in terms of the 
//damage formula.


// a couple rules for myself:
//make parent class of Spell and People have a protected constructor so it can't be called directly (abstract class in some sense? Or is that only if it has a pure virtual function)
//make functions const that I don't plan on changing variables within, this prevents issues down the line in the code.
//pass in by reference more into functions - try to understand when and where copying the variable versus not is better for efficiency. I will probably 
//not fully understand as i'm doing this, that's okay, it's to practice and understand; upon reflection it will make more sense.

//goals:
//implement virtual functions - check
//pure virtual function
//virtual destructors - check
//proper constructors - check
//initiliazer list - check
//passing in objects to declare a second object - check
//function which takes in references to objects.
//try to use const when I can and references when I need to - check
//use a vector, make sure not to copy data when iterating to save memory.
//complicated damage formulas and interactions - check somewhat
//library object which takes in a vector and has functions like (display spells, display people, etc);

//function which takes in a const reference to a vector and prints list of spells and their attributes

