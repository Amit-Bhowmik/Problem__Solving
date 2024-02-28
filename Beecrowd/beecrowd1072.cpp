#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int inInterval = 0, outInterval = 0;

    for (int i = 0; i < n; i++) {
        int X;
        cin >> X;

        if (X >= 10 && X <= 20) {
            inInterval++;
        } 
        else {
            outInterval++;
        }
    }

    cout << inInterval <<" in\n" << outInterval <<" out\n";
    return 0;
}