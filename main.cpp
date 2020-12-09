#include <iostream>
#include <string>
#include <vector>
#include "include/hero.h"

using namespace std;

int main(int argc,const char *argv[])
{
    try
    {
        int age = 18;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw(age);
        }
    }
    catch (int myNum)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum << "\n\n\n";
    }
    // Hero myHero2("Hendra", 1000, 1000);
    // Hero myHero;
    // vector<Hero> heros;

    // myHero.name = "Ardo";
    // myHero.setArmor(100);
    // myHero.setHealth(1000);

    // cout << "Hero Name: " << myHero.name << ", " << myHero2.name << endl;
    // cout << "\tArmor: " << myHero.getArmor() << ", " << myHero2.getArmor() << endl;
    // cout << "\tHealt: " << myHero.getHealth() << ", " << myHero2.getHealth() << endl;
    return 0;
}
