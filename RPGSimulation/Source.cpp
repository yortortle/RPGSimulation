#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "People.h";
#include "Spells.h";
#include "People.h";

using namespace std;

// a couple rules:
//make parent class of Spell and People have a protected constructor so it can't be called directly (abstract class in some sense? Or is that only if it has a pure virtual function)
//make functions const that I don't plan on changing variables within, this prevents issues down the line in the code.
//pass in by reference more into functions - try to understand when and where copying the variable versus not is better for efficiency. I will probably 
//not fully understand as i'm doing this, that's okay, it's to practice and understand.

//goals:
//implement virtual functions
//pure virtual function
//virtual destructors
//proper constructors
//initiliazer list
//passing in objects to object declaration
//function which takes in references to objects.
//try to use const when I can and references when I need to
//use a vector, make sure not to copy data when iterating to save memory.
//complicated damage formulas and interactions
//library object which takes in a vector and has functions like (display spells, display people, etc);

//function which takes in a const reference to a vector and prints list of spells and their attributes

int main()
{
	Bladee drain("Jeff", 1000);
	IceBarrage spell(drain);
	spell.getDamage();
	//spell.calculateDmg();
	cout << spell.getDamage() << endl;
}