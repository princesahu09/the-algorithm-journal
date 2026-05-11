1class Solution {
2public:
3    vector<int> concatWithReverse(vector<int>& nums) {
4
5
6
7        nums.insert(nums.end(),nums.rbegin(),nums.rend());
8        return nums;
9        
10    }
11};