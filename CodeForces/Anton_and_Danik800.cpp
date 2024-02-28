#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int count_A = 0, count_D = 0;
    for (char ch : s)
    {
        if (ch == 'A')
        {
            count_A++;
        }
        if (ch == 'D')
        {
            count_D++;
        }
    }
    if (count_A > count_D)
        cout << "Anton" << endl;

    else if (count_D > count_A) 
        cout << "Danik" << endl;

    else 
        cout << "Friendship" << endl;
    return 0;
}
