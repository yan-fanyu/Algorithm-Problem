#include <iostream>
using namespace std;
#include <string>

int main()
{

	string s;

	cin >> s;

	int i = 0;
	int j = s.length() - 1;

	while(i < j)
	{
		if(s.substr(i++, 1) != s.substr(j--, 1))
		{
			cout << "No";
			return 0;

		}

	}


	cout << "Yes";


	return 0;

}