#include <iostream>
using namespace std;

int main(){
    int num; 
    cin >> num;

    if (num > 0)
    {
        for (int i = num, count = 0; count < 6; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << endl;
                count++;
            }
        }
    }
    
    return 0;
}