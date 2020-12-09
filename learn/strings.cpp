#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string greeting = "Hello";

    cout << greeting << endl;


    // CONCATENATION

    // string firstName = "Hendra ";
    // string lastName = "Kusumawardhana";
    // string fullName = firstName + lastName;

    // cout << fullName << endl;

    // string firstName = "Hendra";
    // string lastName = "Kusumawardhana";
    // string fullName = firstName + " " + lastName;

    // cout << fullName << endl;

    // string firstName = "John ";
    // string lastName = "Doe";
    // string fullName = firstName.append(lastName);
    // cout << fullName << endl;


    // STRING LENGTH

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << "The length of the txt string is: " << txt.size() << endl;


    // ACCESS STRING

    string myString = "Hello";
    cout << "\n\n//ACCESS STRING" << endl;
    cout << "string myString = \"Hello\";" << endl;
    cout << "myString [0] = " << myString[0] << endl;

    int i = 0;
    for(char karakter: myString){
        cout << "myString["<< i <<"] = "<< karakter << endl;
        i++;
    }

    myString[0] = 'G';

    int j = 0;
    for(char karakter: myString){
        cout << "myString["<< j <<"] = "<< karakter << endl;
        i++;
    }

    // string firstName;
    // cout << "Type your first name: ";
    // cin >> firstName; // get user input from the keyboard
    // cout << "Your name is: " << firstName;

    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your full name is : " << fullName;

    return 0;
}
