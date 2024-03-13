#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <map>


int main()
{

	map<int, int> m;

	m.insert(make_pair(10, 20));
	m.insert(make_pair(30, 60));
	auto it = m.find(10);
	if(it != m.end())
		cout << "key = " << 10 << "µÄÖµÎª = " << it->second;



	return 0;
}