#include <iostream>
using namespace std;

bool is_ok(int num, int* prize, int len){
	for(int i = 0; i < len; i++){
		if(num % prize[i] == 0){
			return true;
		}
	}
	return false;
}

int main()
{
	int n;
	int m;
	cin >> n;

	int* lucky = new int[n];

	for(int i = 0; i < n; i++){
		cin >> lucky[i];
	}


	cin >> m;
	
	int* prize = new int[m];

	for(int i = 0; i < m; i++){
		cin >> prize[i];
	}

	int ans = 0;

	for(int i = 0; i < n; i++){
		if(is_ok(lucky[i], prize, m)){
			ans++;
		}
	}


	cout << ans;






	return 0;
}