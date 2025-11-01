class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid[0].size();
        vector<int>number(n*n+1,0);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int value=grid[i][j];
                number[value]+=1;
                
            }
        }
        int missing=-1;
        int twice=0;
        for(int i=0;i<number.size();i++)
        {
            if(number[i]==0)
            {
                missing=i;
            }
            if(number[i]==2)
            {
                twice=i;
            }

        }

        return {twice,missing};

        
    }
};