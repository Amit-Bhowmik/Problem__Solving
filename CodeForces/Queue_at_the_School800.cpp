#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string st;
    cin >> st;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (st[j] == 'B' && st[j + 1] == 'G')
            {
                swap(st[j], st[j + 1]);
                j++;
            }
                        
        }
        
    }
    cout << st << endl;
    
    
    return 0;
}