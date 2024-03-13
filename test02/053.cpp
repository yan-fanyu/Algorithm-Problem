#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>


void sumi(const vector<int>& nums, vector<int>& si)
{
	int sum = 0;
	for(int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];
		si.push_back(sum);
	}
}

int maxSubArray(vector<int>& nums) {
		int max = nums[0];

		vector<int> si;
		sumi(nums, si);

		int temp;

		for(int i = 0; i < nums.size(); i++)
		{
			for(int j = i; j < nums.size(); j++)
			{
				temp = si[j] - si[i] + nums[i];
				if(temp > max){
					max = temp;
				}
			}
			
		}

		return max;
}

int main()
{
	int ans;


	vector<int> nums;

	nums.push_back(-2);
	nums.push_back(1);
	nums.push_back(-3);
	nums.push_back(4);
	nums.push_back(-1);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(-5);
	nums.push_back(4);

	ans = maxSubArray(nums);

	cout << ans;

	return 0;
}