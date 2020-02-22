#pragma once
#include <string>
#include "People.h";
#include "Spells.h";
using namespace std;

Spell* ChosenSpell1;
Spell* ChosenSpell2;

string chosenChar;
string option;

Spell* randSpell(int rand, Person person);
void chosenCharacter(string chosenChar);
void setSpell(Person &person);
void getSpells();
void getCharacters();

