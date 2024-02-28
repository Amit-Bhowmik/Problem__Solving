#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n > 2 && n % 2 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}