#pragma once
using namespace std;

class Person
{
protected:
	string name;
	
	//because chosenClass is entered once and will not change, it's (potentially) good practice to use a const to avoid further error and to take it in by reference to avoid copying it.
	Person(const string& chosenName)
		: name{ chosenName }
	{
		cout << "person has been called" << endl;
	}
	virtual ~Person()
	{
		cout << "person has been destroyed" << endl;
	}
};