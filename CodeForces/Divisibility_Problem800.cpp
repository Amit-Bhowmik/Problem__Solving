#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;

    while(n--) {
        cin >> a >> b;
        int r = a % b;
        int move = 0;
        if (r != 0) {
            move = b - r;
        }
        cout << move << endl;
    }

    return 0;
}
