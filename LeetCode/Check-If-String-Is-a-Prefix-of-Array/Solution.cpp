1class Solution {
2public:
3    bool isPrefixString(string s, vector<string>& words) {
4        string temp="";
5
6        for(auto &i:words)
7        {
8            temp+=i;
9            if(temp==s)
10            {
11                return true;
12            }
13
14        }
15        return false;
16        
17    }
18};