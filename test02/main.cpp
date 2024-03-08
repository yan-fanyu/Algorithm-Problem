#include <iostream>
using namespace std;
#include <algorithm>
#include <map>



int main()
{
  map<long long, int> m;

  int n;
  cin >> n;
  long long x;

  for(int i = 0; i < 2*n; i++){
    long long x;

	cin >> x;

    m[x]++;
  }

  int ans = 0;

  for(auto it = m.begin(); it != m.end(); it++){
	  if(it->second > ans){
		  ans = it->second;
	  } 
  }

  cout << ans;

  
}