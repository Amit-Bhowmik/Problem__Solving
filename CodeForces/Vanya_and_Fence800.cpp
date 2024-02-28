#include <iostream>
using namespace std;
int main()
{
    int n, h, a, total = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a <= h)
        {
            total += 1;
        }
        else
        {
            total += 2;
        }
    }
    cout << total;
    
    return 0;
}