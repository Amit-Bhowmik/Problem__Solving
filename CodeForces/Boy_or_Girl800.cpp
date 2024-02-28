#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string str;
    cin >> str;

    unordered_set<char> distinctChars;
    for (char c : str) {
        distinctChars.insert(c);
    }

    if (distinctChars.size() % 2 != 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}
