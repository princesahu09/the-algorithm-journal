1class Solution {
2public:
3    string transformer(string str) {
4        string ans = "";
5        for (auto& i : str) {
6            if (i >= 'a' && i <= 'z') {
7                ans += i;
8            } else if (i >= 'A' && i <= 'Z') {
9                ans += char(i + 32);
10            }
11        }
12
13        return ans;
14    }
15
16    bool check(vector<int>& freq, string& str)
17
18    {
19
20        vector<int> number(26, 0);
21        for (auto& i : str) {
22            number[i - 'a']++;
23        }
24
25        for (int i = 0; i < 26; i++) {
26            if (number[i] - freq[i] < 0) {
27                return false;
28            }
29        }
30
31        return true;
32    }
33    string shortestCompletingWord(string licensePlate, vector<string>& words) {
34
35        licensePlate = transformer(licensePlate);
36        vector<int> freq(26, 0);
37        for (auto& i : licensePlate) {
38            freq[i - 'a']++;
39        }
40        string ans ="";
41            
42
43        for (int i = 0; i < words.size(); i++) {
44            if (check(freq, words[i])) {
45                if (ans.empty()||words[i].size() < ans.size()) {
46                    ans = words[i];
47                }
48            }
49        }
50        return ans;
51    }
52};