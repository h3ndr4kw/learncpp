#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string food = "Pizza";

    string* ptr = &food;

    // Output the value of food (Pizza)
    cout << food << endl;

    // Output the memory address of food (0x6dfed4)
    cout << &food << endl;
    cout << ptr << endl;

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << *ptr << endl;

    return 0;
}
