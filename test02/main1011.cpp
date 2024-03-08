#include <iostream>
using namespace std;
#include <string>

int main()
{
	int n;
	cin >> n;

	
	int i = 1;
	int sum = 0;

	while(i*(i+1)/2 <= n){
		sum += i*i;
		i++;
		
	}

	// i = 4

	int left = n - i*(i-1)/2;

	sum += left* i; 
	cout << sum;

	return 0;
}