#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (input[i] > 0 && input[i] % 2 == 0)
        {
           cout <<"EVEN POSITIVE\n";
        }
        if (input[i] < 0 && input[i] % 2 == 0)
        {
           cout <<"EVEN NEGATIVE\n";
        }
        if (input[i] > 0 && input[i] % 2 != 0)
        {
           cout <<"ODD POSITIVE\n";
        }
        if (input[i] < 0 && input[i] % 2 != 0)
        {
           cout <<"ODD NEGATIVE\n";
        }
        if (input[i] == 0)
        {
            cout << "NULL\n";
        }
        
        
    }
    

    return 0;
}