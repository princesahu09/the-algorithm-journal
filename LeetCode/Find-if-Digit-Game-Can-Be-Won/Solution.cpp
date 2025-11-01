class Solution {
public:
    bool canAliceWin(vector<int>& nums) {


        int single=0;
        int d=0;

        for(auto &i:nums)
        {
            if(i>9)
            {
                d+=i;
            }
            else
            {
                single+=i;
            }
        }

        return single>d||d>single?true:false;
        
    }
};