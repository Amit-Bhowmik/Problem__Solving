#include <iostream>
using namespace std;
int main()
{
    int n, p;
    cin >> n;
    int gift[100] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        gift[p - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << gift[i] << " ";
    }

    return 0;
}