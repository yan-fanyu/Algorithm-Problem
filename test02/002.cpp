#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
#include <map>
#include <vector>


vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, int> m;
    vector<vector<string>> ans;

    int len = 0;
    string str0;
    int index;
	string s;

    for(int i = 0; i < strs.size(); i++){
		s = strs[i];
        str0 = s;
        sort(s.begin(), s.end());
        auto it = m.find(s);
        // 已经存在
        if(it != m.end()){
            index = it->second;
            ans[index].push_back(str0);

        }else{
            // 新的类型
			vector<string> vv;
			ans.push_back(vv);
            ans[len].push_back(str0);
                
            // 新的索引
            m.insert(make_pair(s, len++));

        }
    }

    return ans;

}

int main(){

	vector<string> strs;
	strs.push_back("eat");
	strs.push_back("tea");
	strs.push_back("tan");
	strs.push_back("ate");
	strs.push_back("nat");
	strs.push_back("bat");

	vector<vector<string>> ans = groupAnagrams(strs);


	for(int i = 0; i < ans.size(); i++)
	{
		for(int j = 0; j < ans[i].size(); j++){
			cout << ans[i][j] << ", ";
		}
		cout << endl;
	}



	return 0;
}


