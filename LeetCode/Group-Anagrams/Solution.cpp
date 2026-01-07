1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4
5        unordered_map<string,vector<string>>mp;
6
7        for(auto &i:strs)
8        {
9
10            string temp=i;
11            sort(temp.begin(),temp.end());
12            mp[temp].push_back(i);
13        }
14        vector<vector<string>>ans;
15        for(auto &i:mp)
16        {
17            ans.push_back(i.second);
18        }
19
20        return ans;
21        
22    }
23};