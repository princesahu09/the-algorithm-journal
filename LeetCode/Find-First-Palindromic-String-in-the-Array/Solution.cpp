class Solution {

    private: bool palindrome(string str)
    {
        string r=str;
        reverse(r.begin(),r.end());
        return r==str;
    }
public:
    string firstPalindrome(vector<string>& words) {
        string ans="";

        for(auto &i:words)
        {
            if(palindrome(i))
            {
                ans=i;
                break;
            }

        }
        return ans;
        
    }
};