#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && b > c)
    {
        cout << a - b + b - c << endl;
    }
    else if (a > c && c > b)
    {
        cout << a - c + c - b << endl;
    }
    else if (b > a && c > b)
    {
        cout << b - a + c - b << endl;
    }
    else if (a > b && c > a)
    {
        cout << c - a + a - b << endl;
    }
    else if (b > a && a > c)
    {
        cout << a - c + b - a << endl;
    }
    
    else
    {
        cout << c - a + b - c << endl;
    }
    
    return 0;
}