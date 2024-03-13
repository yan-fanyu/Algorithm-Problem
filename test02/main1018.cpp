#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include  <cmath>

int d(int ii, int jj, int i, int j)
{
	float x  = 1000;
	sqrt(x);

}

bool is_ok(int ii, int jj, int n)
{
	return ii >= 1 && ii <= n && jj >= 1 && jj <= n;
}

void solve()
{
	set<pair<int, int>> point;
	int n, k, r;
	cin >> n >> k >> r;

	

	int i, j;
	int ii, jj;

	while(cin >> i >> j)
	{
		for(ii = i-r; ii <= i+r; ii++)
		{
			for(jj = j-r; jj <= j+r; jj++)
			{
				if(is_ok(ii, jj, n))
				{
					point.insert(make_pair(ii, jj));
				}
			}
		}
	}

	cout << point.size();

	

	

}

int main()
{
	solve();

	return 0;
}