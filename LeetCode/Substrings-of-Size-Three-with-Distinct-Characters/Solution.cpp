class Solution {
public:
    int countGoodSubstrings(string s) {

        const int n=s.size();
        int ans=0;

        for(int i=0;i+3<=n;i++)
        {
            if(s[i]!=s[i+1]&&s[i+1]!=s[i+2]&&s[i+2]!=s[i])
            {
                ans++;
            }
        }
        return ans;
        
    }
};