class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        if(n%2==1)
        {
            while(n-- >0)
            {
                ans+='a';
            }
        }
        else
        {
            while(n-- >1)
            {
                ans+='a';
            }
            ans+='b';
        }
        return ans;
        
    }
};