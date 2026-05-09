1class Solution {
2public:
3    string gcdOfStrings(string str1, string str2) {
4
5        string f = str1 + str2;
6        string l = str2 + str1;
7        if (f != l)
8            return "";
9
10        int g = gcd(str1.size(), str2.size());
11
12        return str1.substr(0, g);
13    }
14};