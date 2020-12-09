#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    // string car[4] = {"Nissan", "Honda", "Wuling", "Ferarri"};


    // for(int i = 0; i < 4 ; i++)
    // {
    //     cout << car[i] << endl;
    // }

   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " ";
   }
   cout << endl;

    return 0;
}
