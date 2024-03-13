
#include <iostream>
using namespace std;
#include <algorithm>
#include <map>
#include <set>
#include <vector>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> s;
        vector<int> v;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                for(int k = j; k < n; k++){
                    if(i != j && i != k && j != k){
                        if(nums[i] + nums[j] + nums[k] == 0){
                            v.clear();
                            v.push_back(nums[i]);
                            v.push_back(nums[j]);
                            v.push_back(nums[k]);
                            sort(v.begin(), v.end());
                            s.insert(v);
                        }
                    }
                }
            }
        }
        for(auto it = s.begin(); it != s.end(); it++){
            ans.push_back(*it);
        }
        return ans;
    }
};

class Person
{
public:
	Person()
	{
		cout << "构造函数 C"<<endl;
	}

	~Person()
	{
		cout << "析构函数 C"<<endl;
	}
	class C1
	{

		C1()
		{
			cout << "构造函数 C1"<<endl;
		}

	~C1()
	{
		cout << "析构函数 C1"<<endl;
	}
	};
};

int main()
{
	Solution s;

	vector<int> nums;

	nums.push_back(100);
	nums.push_back(101);
	nums.push_back(102);

	Person p = Person();
	


	return 0;
}