1class Solution {
2public:
3    bool isValid(vector<int>& weights, int days, int maxAllow) {
4        int capacity = 0;
5        int d = 1;
6        for (int i = 0; i < weights.size(); i++) {
7            if (weights[i] > maxAllow)
8                return false;
9
10            if (capacity + weights[i] <= maxAllow) {
11                capacity += weights[i];
12            } else {
13                d++;
14                capacity = weights[i];
15            }
16        }
17
18        return d > days ? false:true;
19        
20    }
21    int shipWithinDays(vector<int>& weights, int days) {
22        int start = 0;
23        int end = accumulate(weights.begin(), weights.end(), 0);
24        int ans = -1;
25
26        while (start <= end) {
27            int mid = start + (end - start) / 2;
28
29            if (isValid(weights, days, mid)) {
30                ans = mid;
31                end = mid - 1;
32            } else {
33                start = mid + 1;
34            }
35        }
36
37        return ans;
38    }
39};