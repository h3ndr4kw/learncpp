#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int myNum = 5; // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    double myDoubleNum = 9.98; // Floating point number
    char myLetter = 'D'; // Character
    bool myBoolean = true; // Boolean
    string myText = "Hello"; // String

    cout << "int : " << sizeof(int) << " bytes"<< endl;
    cout << "float : " << sizeof(float) << " bytes"<< endl;
    cout << "double : " << sizeof(double) << " bytes"<< endl;
    cout << "boolean : " << sizeof(bool) << " bytes" << endl;
    cout << "character : " << sizeof(char) << " bytes" << endl;



    return 0;
}
