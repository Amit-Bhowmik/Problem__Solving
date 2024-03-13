#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int min = 4 * 60 - k;
    int time = 0, solved = 0;

    for (int i = 1; i <= n; i++)
    {
        time += 5 * i;

        if (min >= time)
        {
            solved++;
        }
        else
        {
            break;
        }
    }
    cout << solved << endl;
     

    return 0;
}