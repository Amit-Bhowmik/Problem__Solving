#include <bits/stdc++.h> 
using namespace std;
int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    string sum = "";
    for (int i = 0; i < a.length(); i++) // X-OR operations
    {
        if (a[i] == b[i])
        {
            sum += '0';
        }
        else
        {
            sum += '1';
        }
    }
    
    cout << sum;
    return 0;
}