1    class Solution {
2    public:
3        string oddString(vector<string>& words) {
4        map<vector<int>,vector<string>>seen;
5            string ans = "";
6
7            for (auto& j : words) {
8
9                vector<int> vec;
10                for (int i = 1; i < j.size(); i++) {
11
12                    int temp = j[i]-j[i-1];
13
14                    vec.push_back(temp);
15                }
16
17                seen[vec].push_back(j);
18            }
19
20
21            for(auto &i:seen)
22            {
23                if(i.second.size()==1)
24                {
25                    ans= i.second[0];
26                    break;
27                }
28            }
29
30            return ans;
31        }
32    };