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
16        int ans = 0;
17        for (int i = 0; i < n; i++) {
18            if (additionalRocks >= diff[i]) {
19                additionalRocks -= diff[i];
20                diff[i] = 0;
21                ans++;
22            }
23            
24            else
25            break;
26        }
27
28        
29        return ans;
30    }
31};