class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        map<int,int>freq;

        for(auto &i:nums)
        {
            freq[i]++;
        }
        nums.clear();
        for(auto &i:freq)
        {
            int j=0;
            while(j<2&&j<i.second)
            {
                nums.push_back(i.first);
                j++;
            }
        }
        //sort(nums.begin(),nums.end());
        return nums.size();
        
    }
};