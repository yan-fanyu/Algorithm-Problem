#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <set>

int longestConsecutive(vector<int>& nums) {

	set<int> s;

	for(int i = 0; i < nums.size(); i++)
	{
		s.insert(nums[i]);
	}

	nums.clear();

	for(auto it = s.begin(); it != s.end(); it++){
		nums.push_back(*it);
	}


	




	int i = 0;
	int j = 0;

	int ans = 0;
	int temp;

	for(int k = 0; k < nums.size(); )
	{
		i = k;
		j = k;
		while( k + 1 < nums.size() && nums[k] + 1 == nums[k+1] )
		{
			k++;
		}
		temp = k - i + 1;
		k++;

		if(temp > ans)
			ans = temp;
	
	}

	return ans;


}

int main()
{

	vector<int> nums;

	nums.push_back(100);
	nums.push_back(4);
	nums.push_back(200);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(2);

	cout << longestConsecutive(nums);

	return 0;
}