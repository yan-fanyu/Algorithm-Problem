#include <iostream>
#include <set>
using namespace std;


int main(){

	// 马路长度
	int L;

	// 区间数量
	int m;

	// 统计要移除所有树（set自动去重）
	set<int> s;

	cin >> L >> m;

	// 初始树的数量为 L + 1
	int num = L + 1;

	int start;
	int end;

	for(int i = 0; i < m; i++){
		cin >> start >> end;
		for(int j = start; j <= end; j++){
			s.insert(j);
		}
	
	}

	// 结果为 初始树数量 - 要移除的数量
	cout << num - s.size();


	return 0;
}