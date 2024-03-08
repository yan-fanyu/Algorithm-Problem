#include <iostream>
using namespace std;
#include <string>

bool is_lucky(long long n)
{
	string s = to_string(n);

	
	int len = s.length();

	if(len == 1)
		return true;
	if(len % 2 != 0)
		return false;
	
	string s1 = s.substr(0, len/2);
	string s2 = s.substr(len/2);

	int sum1 = 0;
	int sum2 = 0;

	for(int i = 0; i < len /2; i++)
	{
		sum1 += stoi(s1.substr(i, 1));
		sum2 += stoi(s2.substr(i, 1));
	}

	return sum1 == sum2;
	
}

int main()
{
	int x = 1e7;
	int ans = 0;
	for(int i = 1; i <= 1e8; i++)
	{
		
		if(i% x == 0)
			cout << "AH";
		if(is_lucky(i))
			ans++;
	}

	cout << ans;

	return 0;
}