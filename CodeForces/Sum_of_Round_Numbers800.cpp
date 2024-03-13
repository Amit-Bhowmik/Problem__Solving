#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;

        int sum = 0, m = 1, c = 0;
        while (n > 0) {
            int d = n % 10;
            if (d != 0) {
                int r = d * m;
                sum += r;
                c++;
            }
            n /= 10;
            m *= 10;
        }
        
        cout << c << endl; 
        m = 1;
        while (sum > 0) {
            int digit = sum % 10;
            if (digit != 0) {
                cout << digit * m << " ";
            }
            sum /= 10;
            m *= 10;
        }
        
        cout << endl;
    }

    return 0;
}
