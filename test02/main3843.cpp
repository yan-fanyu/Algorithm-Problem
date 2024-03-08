#include <iostream>
using namespace std;
#include <string>
int main()
{

  string a;
  cin >> a;

  int len = a.length();

  if(len % 2 != 0)
  {
    cout << "no";
    return 0;
  }
  
  int n = len / 2;

  string s2 = a.substr(n);

  for(int i = 0; i < n; i++){
    if(s2.substr(i, 1) != a.substr(i, 1)){
      cout << "no";
      return 0;
    }
  }

  cout << "yes";

  return 0;

  
}