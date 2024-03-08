#include <iostream>
using namespace std;


int main(){
	int n;
	int m;

	cin >> n >> m;

	int** arr = new int*[n];
	int** arr_temp = new int*[n];
	for(int i = 0; i < m; i++){
		arr[i] = new int[m];
		arr_temp[i] = new int[m];
	}



	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
			arr_temp[i][j] = arr[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(arr_temp[i][j] == 1){

				for(int k = 0; k < m; k++)
					arr[i][k] = 0;
				for(int k = 0; k < n; k++)
					arr[k][j] = 0;
			}
				 
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << arr[i][j];
		}
		cout << endl;
	}



	return 0;
}