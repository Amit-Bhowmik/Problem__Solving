#include <iostream>
using namespace std;

int main(){
    int num; 
    cin >> num;
    if (num >= 1 && num <= 1000)
    {
        for (int i = 1; i <= num; i += 2)
        {
            cout << i << endl;
        }
        
    }
    

    return 0;
}