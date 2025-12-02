1class Solution {
2public:
3    int maxDistance(vector<int>& colors) {
4
5        const int n=colors.size();
6
7        int ans=INT_MIN;
8
9        for(int i=0;i<n;i++)
10        {
11            for(int j=0;j<n;j++)
12            {
13
14                if(i!=j&&colors[i]!=colors[j])
15                {
16                    ans=max(ans,abs(i-j));
17                }
18
19            }
20        }
21
22        return ans;
23        
24        
25    }
26};