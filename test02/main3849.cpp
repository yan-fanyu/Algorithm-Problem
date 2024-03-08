#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int min = n;
	int max = 1;

	int x, y;

	for(int i = 0; i < m; i++){
	
		cin >> x >> y;


		if(x > max)		max = x;
		if(y < min)		min = y;
	}

  if(min - max < 0){
    cout << 0;
    return 0;
  }


	cout << min - max + 1;

}