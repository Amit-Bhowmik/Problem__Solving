#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    getline(cin, ch);

    set <char> l;

    for (int i = 0; i < ch.size(); ++i)
    {
        if (islower(ch[i]))
        {
            l.insert(ch[i]);
        }
    }

    cout << l.size() << endl;

    return 0;
}