1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4
5
6
7        unordered_map<string ,int>freq;
8
9        for(string &i:strs)
10        {
11            for(int j=0;j<i.size();j++)
12            {
13                freq[i.substr(0,j+1)]++;
14            }
15        }
16        freq.erase("");
17        string ans="";
18       
19
20        for(auto &i:freq)
21        {
22            if(i.second==strs.size()&&(i.first.size()>ans.size()))
23            {
24                ans=i.first;
25              
26            }
27        }
28
29        return ans;
30        
31    }
32};