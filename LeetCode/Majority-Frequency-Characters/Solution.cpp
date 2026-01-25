1class Solution {
2public:
3    string majorityFrequencyGroup(string s) {
4
5        unordered_map<char, int> f1;
6
7        for (auto & i : s) {
8            f1[i]++;
9        }
10
11        unordered_map<int, string> f2;
12
13        for (auto& i : f1) {
14            f2[i.second]+=i.first;
15        }
16
17        
18        string ans="";
19        int k=0;
20        
21        for (auto& i : f2) {
22            if(i.second.size()==ans.size())
23            {
24                if(i.first>k)
25                {
26                    ans=i.second;
27                    k=i.first;
28                }
29
30            }
31           else if (i.second.size()>=ans.size()) {
32                k=i.first;
33                
34               
35                ans=i.second;
36            }
37        }
38       
39        return ans;
40    }
41};