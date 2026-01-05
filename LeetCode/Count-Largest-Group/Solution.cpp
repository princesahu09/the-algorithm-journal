1class Solution {
2public:
3    int digitSum(int num) {
4        int ans = 0;
5
6        while (num > 0) {
7            ans += (num % 10);
8            num /= 10;
9        }
10        return ans;
11    }
12    int countLargestGroup(int n) {
13
14        unordered_map<int, int> mp;
15        for (int i = 1; i <=n; i++) {
16            mp[digitSum(i)]++;
17        }
18        int high = 0;
19
20        for (auto& i : mp) {
21
22            high = max(high, i.second);
23        }
24        int counter = 0;
25        for (auto& i : mp) {
26            if (high == i.second) {
27                counter++;
28            }
29        }
30
31        return counter;
32    }
33};