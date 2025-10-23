class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int ans=0;

        for(auto &i:operations)
        {
            if(i=="++X"||i=="X++")
            ans+=1;
            else
            ans-=1;
        }
        return ans;
        
    }
};