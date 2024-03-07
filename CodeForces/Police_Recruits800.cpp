#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c = 0, a = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == -1)
        {
            if (a > 0)
            {
                a--;
            }
            else
            {
                c++;
            }
        }
        else 
        {
            a += n;
        }
    }
    cout << c << endl;
    return 0;
}