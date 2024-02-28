#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int totalScore;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        if (i < k - 1 && score > 0) {
            count++;
        } 
        else if (i >= k - 1 && score >= totalScore && score > 0) {
            count++;
        }
        if (i == k - 1) {
            totalScore = score;
        }
    }

    cout << count << endl;

    return 0;
}
