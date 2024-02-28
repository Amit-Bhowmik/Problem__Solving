#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

int main()
{
    string str;
    cin >> str;

    int upperCount = 0;
    int lowerCount = 0;

    for (char c : str) {
        if (isupper(c)) 
        {
            upperCount++;
        } 
        else if (islower(c)) 
        {
            lowerCount++;
        }
    }

    if (upperCount > lowerCount) 
    {
        for (char &c : str) 
        {
            c = toupper(c);
        }
    } 
    else 
    {
        for (char &c : str) 
        {
            c = tolower(c);
        }
    }

    cout << str << endl;

    return 0;
}
