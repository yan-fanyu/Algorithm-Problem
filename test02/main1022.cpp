#include <iostream>
#include <set>
using namespace std;


int main(){

	// ��·����
	int L;

	// ��������
	int m;

	// ͳ��Ҫ�Ƴ���������set�Զ�ȥ�أ�
	set<int> s;

	cin >> L >> m;

	// ��ʼ��������Ϊ L + 1
	int num = L + 1;

	int start;
	int end;

	for(int i = 0; i < m; i++){
		cin >> start >> end;
		for(int j = start; j <= end; j++){
			s.insert(j);
		}
	
	}

	// ���Ϊ ��ʼ������ - Ҫ�Ƴ�������
	cout << num - s.size();


	return 0;
}