#include <iostream>
using namespace std;
int main()
{
    int n, p, q, cnt = 0, i = 0;
    cin >> n;

    while (i < n)
    {
        i++;
        cin >> p;
        if (i == 0)
        {
            p = q;
            
        }
        if (i > 0 && q != p)
        {
            q = p;
            cnt++;
        }
       
    }
    cout << cnt << endl;
    
    return 0;
}