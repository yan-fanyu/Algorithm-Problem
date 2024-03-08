#include <iostream>
using namespace std;
#include <algorithm>


int main(){
	int n;
	int m;

	double max_score = 0;

	cin >> n >> m;

	int* arr = new int[m];

	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < m; j++){
			cin >> arr[j];
			sum += arr[j];
		}
		sort(arr, arr+m);

		// ¼õÈ¥×îÖµ
		sum = sum - arr[0] - arr[m-1];

		double score = double(sum) / (m - 2);

		if(score > max_score){
			max_score = score;
		}
	}

	printf("%.2f", max_score);

	return 0;
}