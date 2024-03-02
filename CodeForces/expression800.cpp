#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int m = 0;
    m = max(m, a + b + c);
    m = max(m, a * b * c);
    m = max(m, a * b + c);
    m = max(m, a + b * c);
    m = max(m, (a + b) * c);
    m = max(m, a * (b + c));

    cout << m << endl;


    return 0;
}