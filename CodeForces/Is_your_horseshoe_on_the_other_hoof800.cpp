#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    if (s1 == s2 && s2 == s3 && s3 == s4)
    {
        cout << 4 - 1 << endl;
    }
    else if (s1 == s4 && s2 == s3 || s1 == s3 && s2 == s4 || s2 == s3 && s3 == s4 || s1 == s2 && s3 == s4 || s1 == s2 && s2 == s3)
    {
        cout << 4 - 2 << endl;
    }

    else if(s1 == s2 || s1 == s3 || s1 == s4 || s2 == s3 || s2 == s4 || s3 == s4)
    {
        cout << 4 - 3 << endl;
    }

    
    else
    {
        cout << 4 - 4 << endl;
    }
    
    
    
    return 0;
}