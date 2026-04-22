1class Solution {
2public:
3    bool isPalindrome(int x) {
4        
5        string r=to_string(x);
6        reverse(r.begin(),r.end());
7        int rev=stol(r);
8        return x==rev?true:false;
9        
10    }
11};