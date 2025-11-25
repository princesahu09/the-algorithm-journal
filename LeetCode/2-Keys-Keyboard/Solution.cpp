class Solution {
public:
    int minSteps(int n) {
        int ans=0;
        int d=2;

        if(n<2)return 0;
        
        while(n>1)
        {
            if(n%d==0)
            {
                ans+=d;
                n/=d;
            }
            else
            {
               d++;
            }   

        }

        return ans;
        
    }
};