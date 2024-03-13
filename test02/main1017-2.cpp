#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>
#include <set>

int solve()
{
	
	int n;
	int k;
	cin >> n >> k;

	int empty = n;
	int sum = n;

	while(empty >= k)
	{
		sum += empty / k;
		empty = empty % k + empty / k;
	}

	return sum;
}

int main()
{
	
	cout << solve();
	return 0;
}