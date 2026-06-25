1class Solution {
2public:
3    int bagOfTokensScore(vector<int>& tokens, int power) {
4
5        sort(tokens.begin(), tokens.end());
6
7        int start = 0;
8        int end = tokens.size() - 1;
9        int score = 0;
10        int ans = 0;
11
12        while (start <= end) {
13
14            if (tokens[start] <= power) {
15                power -= tokens[start];
16                start++;
17
18                score++;
19            } else if (score >= 1) {
20                score--;
21                power += tokens[end];
22                end--;
23
24            } else {
25                break;
26            }
27
28            ans = max(ans, score);
29        }
30
31        return ans;
32    }
33};