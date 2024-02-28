#include <iostream>
using namespace std;

int main(){
    int num[5];
    int EvenCount = 0, OddCount = 0, PositiveCount = 0, NegativeCount = 0;
    for(int i = 0; i < 5; i++){
        cin >> num[i];
    }
    for(int i = 0; i < 5; i++){
        if (num[i] % 2 == 0)
        {
            EvenCount++;
        }
        else
        {
            OddCount++;
        }
        if (num[i] > 0)
        {
            PositiveCount++;
        }
        if(num[i] < 0)
        {
            NegativeCount++;
        } 
    }
    cout << EvenCount <<" valor(es) par(es)\n";
    cout << OddCount <<" valor(es) impar(es)\n";
    cout << PositiveCount << " valor(es) positivo(s)\n";
    cout << NegativeCount <<" valor(es) negativo(s)\n";
    

    return 0;
}