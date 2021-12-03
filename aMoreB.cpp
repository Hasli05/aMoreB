using namespace std;
#include <iostream>
#include <string>

int main()
{
    string userString;
    int letterA = 0;
    int letterB = 0;

    cout << "Enter string :" << endl;
    cin >> userString;

    for (int i = 0; i < userString.size(); ++i)
    {
        if (userString[i] == 'a')
        {
            ++letterA;
        }
        if (userString[i] == 'b')
        {
            ++letterB;
        }
    }

    if (letterA > letterB)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

