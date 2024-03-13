#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>


void solve()
{
	// set<int> s;

	unordered_set<int> s;

	unordered_map<int, int> m;
	m.insert(make_pair(9 ,2));

	m.insert(make_pair(1 ,2));
	m.insert(make_pair(4 ,2));

	auto its = m.find(4);
	cout << its->first << " " << its->second <<endl;

	
	m.erase(4);

	m[100]  =1000;
	

	for(auto it = m.begin(); it != m.end(); it++){
		cout << it->first << " " << it->second << endl;
	}

	s.insert(10);
	s.insert(8);
	s.insert(100);

	s.insert(10);
	
	//s.erase();

	for(auto it = s.begin(); it != s.end(); it++){
		cout << *it<< " ";
	}
}

int main()
{
	solve();

	return 0;
}