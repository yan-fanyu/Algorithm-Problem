#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
  int n;
  cin >> n;
  int* arr = new int[n];

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  sort(arr, arr+n);

  int sum = 0;

  for(int i = 0; i < n; i++){
    sum = sum+  arr[i] * (n-i -1);
  }

  cout << sum;

  return 0;
}