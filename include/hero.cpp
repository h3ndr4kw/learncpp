#include "hero.h"

Hero::Hero(){
    
}

Hero::Hero(string heroName, int initArmor, int initHealth)
{
    name = heroName;
    armor = initArmor;
    health = initHealth;
}

Hero::~Hero()
{
}

void Hero::setArmor(int value) { armor = value; }
void Hero::setHealth(int value) { health = value; }
int Hero::getArmor() { return armor; }
int Hero::getHealth() { return health; }