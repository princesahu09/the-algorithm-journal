class Solution {
public:
    int minimumChairs(string s) {

const int n=s.size();
        int ans=0;
        int r=0;
        for(int i=0;i<n;i++)
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