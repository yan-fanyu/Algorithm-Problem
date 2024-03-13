#include <iostream>
using namespace std;
#include <map>
int main()
{
  int n;
  int k;

  map<int, int> m;
  int item;


  


  cin >> n;

  int* arr = new int[n];

  for(int i = 0; i < n; i++){
    cin >> item;
    m[item] = i;
	arr[i] = item;
  }

  cin >> k;

  for(int i = 0; i < n; i++){
    
    auto it = m.find(k - arr[i]);
    if(it != m.end())
    {
		if(it->second < i)
			cout << it->second << " " << i;
		else
			cout << i << " " << it->second;
      return 0;
    }
    
  }

  return 0;
}