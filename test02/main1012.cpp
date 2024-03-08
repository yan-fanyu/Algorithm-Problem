#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <algorithm>

bool is_prime(double n)
{
	for(int i = 2; i < int(sqrt(n)); i++)
	{
		if(int(n) % i == 0)
			return false;
	}
	return true;

}

int main()
{
	int n;
	cin >> n;

	if(n == 1)
	{
		cout << 6;
		return 0;
	}

	

	int s1;
	int s2;
	int ans;

	for(int i = n + 1; ;i++)
	{
		if(!is_prime(i)){
		s1 = i;
		break;}
	}

	for(int i = n + 1; ;i++)
	{
		if(is_prime(i)){
		s2 = i;
		
		break;}
		
	}

	cout << s1+s2;
	

	

	return 0;
}