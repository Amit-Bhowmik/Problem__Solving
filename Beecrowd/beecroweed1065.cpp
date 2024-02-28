#include <iostream>
using namespace std;

int main(){
    int num[5], count = 0;
    for(int i = 0; i < 5; i++){
        cin >> num[i];
    }
        
    for(int i = 0; i < 5; i++){
       if (num[i] % 2 == 0)
       {
            count++;
       }   
    }
    cout << count <<" valores pares\n";

    return 0;
}