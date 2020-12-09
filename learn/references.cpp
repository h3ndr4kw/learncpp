#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string food = "Pizza";  // food variable
    string &meal = food;    // reference to food

    cout << food << "\n"; 
    cout << &food << "\n";
    cout << &meal << "\n";
    cout << meal << "\n";

    return 0;
}
