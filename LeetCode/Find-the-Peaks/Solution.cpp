1class Solution {
2public:
3    vector<int> findPeaks(vector<int>& s) {
4
5
6        vector<int>ans;
7
8
9        for(int i=1;i+1<s.size();i++)
10        {
11            if(s[i]>s[i-1]&&s[i]>s[i+1])
12            {
13                ans.push_back(i);
14            }
15        }
16        return ans;
17        
18    }
19};