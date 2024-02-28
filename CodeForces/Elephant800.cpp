#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int minSteps = n / 5; 

    if (n % 5 != 0) {
        minSteps += 1; 
    }
    
    cout << minSteps;
    return 0;
}
