class Solution {
public:
    bool isPalindrome(int x) {
        
        string r=to_string(x);
        reverse(r.begin(),r.end());
        int rev=stol(r);
        return x==rev?true:false;
        
    }
};