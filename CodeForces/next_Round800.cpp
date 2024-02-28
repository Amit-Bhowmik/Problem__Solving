#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int sc[n];
    for (int i = 0; i < n; ++i) {
        cin >> sc[i];
    }
    int t = sc[k - 1], p = 0;

    for (int i = 0; i < n; ++i) {
        
        if (sc[i] > 0 && sc[i] >= t) {
            p++;
        }
    }

    cout << p << endl;

    return 0;
}
