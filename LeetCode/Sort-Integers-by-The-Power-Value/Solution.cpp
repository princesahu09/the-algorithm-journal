1class Solution {
2public:
3    int power(int num) {
4
5        int step = 0;
6
7        while (num != 1) {
8            if ((num & 1) == 1) {
9                num = 3 * num + 1;
10            } else {
11                num /=2;
12            }
13            step++;
14        }
15
16        return step;
17    }
18    int getKth(int lo, int hi, int k) {
19
20        vector<pair<int, int>> vec;
21
22        for (int i = lo; i <= hi; i++) {
23            vec.push_back({i, power(i)});
24        }
25
26        sort(vec.begin(), vec.end(), [](auto& a, auto& b) {
27            if (a.second == b.second) {
28                return a.first < b.first;
29            }
30            return a.second < b.second;
31        });
32
33        return vec[k-1].first;
34    }
35};