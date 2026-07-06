1class Solution {
2public:
3    int solve(vector<pair<int, int>> arr, int target) {
4
5        int start = 0;
6        int end = arr.size() - 1;
7
8        while (start <= end) {
9            int mid = start + (end - start) / 2;
10
11            if (arr[mid].first == target) {
12                return arr[mid].second;
13
14            }
15
16            else if (arr[mid].first > target) {
17                end = mid - 1;
18            } else {
19                start = mid + 1;
20            }
21        }
22
23        if (start == arr.size())
24            return -1;
25
26        return arr[start].second;
27    }
28    vector<int> findRightInterval(vector<vector<int>>& intervals) {
29
30        vector<pair<int, int>> arr;
31
32        for (int i = 0; i < intervals.size(); i++) {
33            arr.push_back({intervals[i][0], i});
34        }
35
36        sort(arr.begin(), arr.end(),
37             [](auto& a, auto& b) { return a.first < b.first; });
38
39        vector<int> ans(intervals.size(), 0);
40
41        for (int i = 0; i < intervals.size(); i++) {
42            ans[i] = solve(arr, intervals[i][1]);
43        }
44
45        return ans;
46    }
47};