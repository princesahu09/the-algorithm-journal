1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4        vector<vector<int>> ans;
5
6        sort(arr.begin(), arr.end());
7        int low = INT_MAX;
8        //  int k=0;
9
10        for (int i = 0; i +1< arr.size(); i ++) {
11            int diff = abs(arr[i] - arr[i + 1]);
12             int a, b;
13                if (arr[i] > arr[i + 1]) {
14                    a = arr[i + 1];
15                    b = arr[i];
16                } else {
17                    b = arr[i + 1];
18                    a = arr[i];
19                }
20
21            if (diff < low) {
22                low = diff;
23                ans.clear();
24            }
25
26             if (diff == low) {
27               
28                ans.push_back({a, b});
29            }
30            
31
32        }
33        return ans;
34    }
35};