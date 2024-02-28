#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;

    if (n >= 10000)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= 10000; i++)
        {
            if (i % n == 2)
            {
                cout << i << endl;
            }
            
        }
        
    }
    
    
    return 0;
}