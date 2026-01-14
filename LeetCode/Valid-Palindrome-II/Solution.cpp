1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string temp = s;
5        reverse(temp.begin(), temp.end());
6        return temp == s;
7    }
8
9    bool validPalindrome(string s) {
10
11        int start = 0;
12        int end = s.size() - 1;
13        while (start <= end) {
14            if (s[start] == s[end]) {
15                start++;
16                end--;
17            } else {
18
19                return isPalindrome(s.substr(start + 1, end-start)) ||
20                       isPalindrome(s.substr(start, end - start));
21            }
22        }
23
24        return true;
25    }
26};