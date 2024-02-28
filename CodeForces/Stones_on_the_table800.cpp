#include <iostream>
using namespace std;
int main()
{
    int n;
    string stone;

    cin >> n >> stone;

    int previous = stone[0];
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (stone[i] == previous)
        {
            count++;
        }
        else
        {
            previous = stone[i];
        }
    }
    cout << count << endl;
    

    return 0;
}