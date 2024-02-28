#include <iostream>
using namespace std;

int sum_of_odd_values(int x, int y) {
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    int odd_sum = 0;

    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            odd_sum += i;
        }
    }

    return odd_sum;
}

int main() {
    int x, y;
    cin >> x >> y;
    int result = sum_of_odd_values(x, y);
    cout << result << endl;

    return 0;
}
