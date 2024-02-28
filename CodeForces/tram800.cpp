#include <iostream>
using namespace std;
int main(){
	int n, in, out, total = 0, min = 0;
	cin >> n;
	while(n--){
		cin >> out >> in;
		total += in - out;
		if(total > min){
			min = total;
		}
	}
	cout << min << endl;
	return 0;
}