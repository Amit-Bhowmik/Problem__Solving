#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    bool alph[26] = {false};
    for (char ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            alph[ch - 'A'] = true;

        }
        else if (ch >= 'a' && ch <= 'z')
        {
            alph[ch - 'a'] = true;
        }
    }

    bool all_alph = true;
    for (bool p : alph)
    {
       if (!p)
       {
            all_alph = false;
       }
       
    }
    
    if (all_alph)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    
    
    return 0;
}