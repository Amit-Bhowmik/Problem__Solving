#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
  
    int totalSqr = m * n;
    int totalDomino = totalSqr / 2;
    cout << totalDomino;
    
    return 0;
}
