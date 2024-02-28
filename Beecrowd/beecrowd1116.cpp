#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    int i = 0;

    float result = 0;
    while (i < n)
    {
        cin >> x >> y;
        i++;
        if (x != 0 && y != 0)
        {
            result = (float)x / (float)y;
            cout << result << endl;
        }
        else if(y == 0){
            cout << "divisao impossivel\n";
        }
        else if(x == 0){
            result = (float)x / (float)y;
            cout << fixed << setprecision(1) << result << endl;
        }
        
    }
    return 0;
}