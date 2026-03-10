1class Solution {
2public:
3    bool check(string& temp) {
4
5        const int n = temp.size();
6        int hypen = 0;
7        int p = 0;
8
9        for (int i = 0; i < n; i++) {
10            char ch = temp[i];
11            if (ch >= '0' && ch <= '9') {
12                return false;
13            }
14            if (ch == '-') {
15
16                hypen++;
17                if (hypen > 1) {
18                    return false;
19                }
20                if (i == 0 || i == n - 1) {
21                    return false;
22                }
23                if (!isalpha(temp[i - 1]) || !isalpha(temp[i + 1])) {
24                    return false;
25                }
26            }
27
28            if (ch == '.' || ch == '!' || ch == ',') {
29                p++;
30                if (p > 1) {
31                    return false;
32                }
33                if (i != n - 1) {
34                    return false;
35                } else {
36                    continue;
37                }
38            }
39        }
40        return true;
41    }
42    int countValidWords(string sentence) {
43
44        stringstream ss(sentence);
45        string word;
46        int ans = 0;
47        while (ss >> word) {
48            if (check(word)) {
49                ans++;
50            }
51        }
52
53        return ans;
54    }
55};