1class Solution {
2public:
3    void marker(vector<int>& time, int start, int end) {
4        for (int i = start; i < end; i++) {
5            time[i - 1950]++;
6        }
7    }
8    int maximumPopulation(vector<vector<int>>& logs) {
9
10        vector<int> time(100, 0);
11
12        for (int i = 0; i < logs.size(); i++) {
13            marker(time, logs[i][0], logs[i][1]);
14        }
15
16        int ans = 0;
17        int high = 0;
18        for (int i = 0; i < time.size(); i++) {
19            if (time[i] > high) {
20                ans = i;
21                high = time[i];
22            }
23        }
24
25        return ans + 1950;
26    }
27};