#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "People.h";
#include "Spells.h";
#include "People.h";
using namespace std;

int main()
{
	Bladee jeff("Jeff", 1000);
	IceBarrage bladeeBarrage(jeff);
	cout << bladeeBarrage.getDamage() << endl;
	
	DrainGang troy("troy", 1000);
	IceBarrage troyBarrage(troy);
	cout << troyBarrage.getDamage() << endl;
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
//try to use const when I can and references when I need to
//use a vector, make sure not to copy data when iterating to save memory.
//complicated damage formulas and interactions
//library object which takes in a vector and has functions like (display spells, display people, etc);

//function which takes in a const reference to a vector and prints list of spells and their attributes

