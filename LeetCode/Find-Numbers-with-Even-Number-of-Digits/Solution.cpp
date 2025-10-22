class Solution {
public:
    int findNumbers(vector<int>& nums) {
         return count_if(nums.begin(), nums.end(), [](int x){ return int(log10(x)+1) % 2 == 0; });


        
    }
};