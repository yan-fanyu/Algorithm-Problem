#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>
#include <set>

// 从大到小
bool func(int a, int b)
{
	return a > b;
}

void solve()
{
	int n;
	cin >> n;

	int* arr = new int[n];
	

	for(int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr+n, func);

	cout << arr[0] + arr[1] + arr[2];
}

int main()
{
	solve();

	return 0;
}