#include <iostream>
using namespace std;
#include <algorithm>

int main(){

	int n;

	cin >> n;

	int* arr = new int[n];

	int i = 0;
	while(i < n){
		cin >> arr[i++];
	}

	sort(arr, arr + n);

	cout << arr[n-1] + arr[n-2] + arr[n-3];



	return 0;

}