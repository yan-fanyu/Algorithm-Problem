
#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <numeric> 

void sumi(const vector<int>& nums, vector<int>& si)
{
	int sum = 0;
	for(int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
		si.push_back(sum);
	}

}

int subarraySum(vector<int>& nums, int k) {

	int sumij;
	int ans = 0;

	vector<int> si;
	sumi(nums, si);

    for(int i = 0; i < nums.size(); i++){
		for(int j = i; j < nums.size(); j++){
			sumij = si[j] - si[i] + nums[i];
			if(sumij == k)
				ans++;
		}
    }
    return ans;
}

int main()
{
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);

	int k = 2;

	int ans = subarraySum(nums, k);

	cout << ans << endl;

}