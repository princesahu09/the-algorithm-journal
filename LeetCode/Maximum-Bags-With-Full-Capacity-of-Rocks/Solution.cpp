1class Solution {
2public:
3    int maximumBags(vector<int>& capacity, vector<int>& rocks,
4                    int additionalRocks) {
5
6        const int n = capacity.size();
7
8        vector<int> diff(n, 0);
9
10        for (int i = 0; i < n; i++) {
11            diff[i] = capacity[i] - rocks[i];
12        }
13
14        sort(diff.begin(), diff.end());
15
16        for(int i=0;i<n;i++)
17        {
18            if(additionalRocks>=diff[i])
19            {
20                additionalRocks-=diff[i];
21                diff[i]=0;
22            }
23        }
24        int ans = 0;
25
26        for (auto& i : diff) {
27            if (i == 0)
28                ans++;
29        }
30        return ans;
31    }
32};