1class Solution {
2public:
3    string thousandSeparator(int n) {
4        string temp = to_string(n);
5
6        string ans = "";
7        reverse(temp.begin(), temp.end());
8        int counter = 0;
9
10        int i = 0;
11        const int l = temp.size();
12        while (i < l) {
13            if (counter == 3) {
14                counter = 0;
15                ans += '.';
16            }
17            counter++;
18            ans += temp[i];
19            i++;
20        }
21        reverse(ans.begin(), ans.end());
22        return ans;
23    }
24};