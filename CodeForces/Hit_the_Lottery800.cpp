#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, bill = 0;
    cin >> n;
    int note[] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++)
    {
        bill += n / note[i];
        n %= note[i];
    }
    cout << bill << endl;

    return 0;
}