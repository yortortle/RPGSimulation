#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "People.h";
#include "Spells.h";
#include "People.h";

using namespace std;

//implement virtual functions
//pure virtual function
//virtual destructors
//proper constructors
//initiliazer list
//passing in objects to object declaration
//function which takes in references to objects.
//try to use const when I can and references when I need to
//use a vector, make sure not to copy data when mapping
//complicated damage formulas and interactions

//function which takes in a const reference to a vector and prints list of spells and their attributes

int main()
{
	IceBarrage spell(30);
	spell.getDamage();
	cout << spell.getDamage() << endl;

}