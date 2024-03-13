#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>
#include <set>

void solve()
{
	int n;
	cin >> n;
	
	set<int> s;
	int nnn;
	for(int i = 0; i < n; i++)
	{
		cin >> nnn;
		s.insert(nnn);
	}

	int m;
	cin >> m;
	int* ques = new int[m];
	for(int i = 0; i < m; i++)
	{
		cin >> ques[i];
	}

	for(int i = 0; i < m; i++)
	{
		nnn = ques[i];
		if(s.find(nnn) != s.end())
			cout << "YES\n";
		else 
			cout << "NO\n";
	}

	
}

int main()
{
	solve();

	return 0;
}