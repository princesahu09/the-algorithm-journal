1class Solution {
2public:
3    string compress(string temp) {
4        string ans = "";
5
6        int i = 0;
7        while (i < temp.size()) {
8            int counter = 0;
9            int j = i;
10            char ch = temp[i];
11            while (j < temp.size() && ch == temp[j]) {
12                counter++;
13                j++;
14            }
15
16            ans += to_string(counter);
17            ans.push_back(ch);
18
19            i = j;
20            counter = 0;
21        }
22
23        return ans;
24    }
25    string countAndSay(int n) {
26        string ans = "1";
27        int i = 0;
28
29        while (i < n - 1) {
30
31            ans = compress(ans);
32            cout << ans;
33            i++;
34        }
35
36        return ans;
37    }
38};