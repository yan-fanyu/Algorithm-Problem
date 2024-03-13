//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//#include <map>
//#include <set>
//
//int solve(int all, int full, int k)
//{
//	
//	if(all < k)
//		return 0;
//
//	return all/k+solve(all%k+all/k, all/k, k);
//}
//
//int Solve(int n, int k){
//	return n+solve(n, n, k);
//}
//	
//
//
//int main()
//{
//	int n=0, k=0;
//	cin >> n >> k;
//	cout << Solve(n, k);
//
//	return 0;
//}