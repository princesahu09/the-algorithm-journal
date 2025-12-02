1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4
5        vector<bool> visited(k + 1, false);
6        int found = 0;
7
8        int counter = 0;
9
10        while (found<k) {
11
12           
13
14            int last = nums.back();
15            nums.pop_back();
16            counter++;
17
18            if (last <= k && !visited[last]) {
19                found++;
20                visited[last] = true;
21            }
22
23        }
24
25        return counter;
26    }
27};