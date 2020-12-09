#include <iostream>
#include <string>

using namespace std;

class Hero
{
public:

    Hero();
    Hero(string heroName, int initArmor, int initHealth);
    ~Hero();

    string name;

    void setArmor(int value);
    void setHealth(int value);
    int getArmor();
    int getHealth();

private:
    int armor;
    int health;
};
