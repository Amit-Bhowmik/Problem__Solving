#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int h[n];
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];
    }
    
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i != j && h[i] == a[j]){
                c++;
            }
        }
        
    }
    cout << c << endl;
    

    return 0;
}