1class Solution {
2public:
3    string converter(int n) {
4        string ans = "";
5        if (n == 0)
6            return "0";
7        if (n == 1)
8            return "1";
9        while (n > 0) {
10            int r = n % 2;
11            ans += (r + '0');
12            n /= 2;
13        }
14        reverse(ans.begin(), ans.end());
15        return ans;
16    }
17    int binaryGap(int n) {
18
19        string temp = converter(n);
20        int ans = INT_MIN;
21        int last = -1;
22
23        for (int i = 0; i < temp.size(); i++) {
24
25            if (temp[i] == '1') {
26                if (last != -1) {
27                    ans = max(ans, i - last);
28                }
29                last = i;
30            }
31        }
32
33        return ans == INT_MIN ? 0 : ans;
34    }
35};