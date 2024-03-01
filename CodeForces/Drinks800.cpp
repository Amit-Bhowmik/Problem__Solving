#include <iostream>
using namespace std;
int main()
{
    double n, p;
    cin >> n;
    double div, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        sum += p;
        div = sum / n;
    }
    cout << div;
    
    return 0;
}