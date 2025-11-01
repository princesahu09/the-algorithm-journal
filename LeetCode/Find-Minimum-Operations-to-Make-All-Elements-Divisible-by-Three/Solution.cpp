class Solution {
public:
    int minimumOperations(vector<int>& nums) {

    int ans=0;

    for(auto &i:nums)
    {
       int r=i%3;
       if(r==1)
       {
        ans+=1;
       }
       else if(r==2)
       {
        ans+=1;
       }

    }
    return ans;
        
    }
};