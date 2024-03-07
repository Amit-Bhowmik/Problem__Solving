#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){

        string poly;
        cin >> poly;

        if (poly == "Tetrahedron")
        {
            sum += 4;   
        }
        else if (poly == "Cube")
        {
            sum += 6; 
        }
        else if (poly == "Octahedron")
        {
            sum += 8; 
        }
        else if (poly == "Dodecahedron")
        {
            sum += 12; 
        }
        else if (poly == "Icosahedron")
        {
            sum += 20; 
        }
    }
    
    cout << sum << endl;
    return 0;
}