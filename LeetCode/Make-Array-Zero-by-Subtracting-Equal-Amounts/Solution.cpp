1class Solution {
2public:
3    int minimumOperations(vector<int>& nums) {
4        unordered_set<int>arr;
5        for(int &i:nums){if(i>0)arr.insert(i);}return arr.size();
6        
7        
8    }
9};