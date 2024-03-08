#include <iostream>
using namespace std;

int main(){
	int k = 0;

	cin >> k;

	double sum = 0;

	int i = 1;

	while(sum <= k){
		sum = sum + 1.0/i;
		i++;
	}

	cout << i;

	return 0;
}