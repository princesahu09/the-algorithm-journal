1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if(s.size()!=goal.size())return false;
5
6        s=s+s;
7        return s.find(goal)!=string::npos?true:false;
8        
9    }
10};