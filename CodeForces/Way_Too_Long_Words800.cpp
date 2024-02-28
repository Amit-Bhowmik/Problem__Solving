#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int size;
    cin >> size;
    cin.ignore(); 

    string arr[size];
    for (int i = 0; i < size; i++) 
    {
        getline(cin, arr[i]);
        if (arr[i].length() > 10) 
        {
            cout << arr[i][0] << arr[i].length() - 2 << arr[i].back() << endl;
        } 
        else 
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}