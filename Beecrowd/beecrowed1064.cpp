#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float num[6], sum = 0, avg;
    for(int i = 0; i < 6; i++){
        cin >> num[i];
    }
    int count = 0;
    for(int i = 0; i < 6; i++){
        if (num[i] > 0)
        {
            count++;
            sum += num[i];  
        }
    }
    if(count > 0){
        avg = sum / count;
        cout << count <<" valores positivos\n";
        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}