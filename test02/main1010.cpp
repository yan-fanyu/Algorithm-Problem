#include <iostream>
using namespace std;
#include <string>

int main()
{
	int n;
	int h;
	cin >> n;

	int* arr = new int[n];

	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cin >> h;

	int num = 0;

	for(int i = 0; i < n; i++)
	{
		if(h + 30 >= arr[i])
			num++;
	}

	cout << num << endl;
	if(num == n)
		cout << "Yes";
	else
		cout << "No";

	cin >> h;


	

	return 0;
}