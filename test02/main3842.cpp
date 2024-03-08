#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int sum0 = 0;
  int sum1 = 0;

  while(n > 0){
    if(n % 2 == 1)
      sum1 ++;
    else
      sum0++;
    n /= 2;
  }

  cout << sum1 << " " << sum0; 
}
