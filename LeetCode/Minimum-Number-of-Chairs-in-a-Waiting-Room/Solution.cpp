class Solution {
public:
    int minimumChairs(string s) {


        int ans=0;
        int r=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='E')
            {
                ans++;
                r=max(ans,r);
            }
            else
            {

                ans--;
            }
        }
        return r;
        
    }
};