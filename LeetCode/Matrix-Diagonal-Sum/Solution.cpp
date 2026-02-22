1class Solution {
2public:
3    int diagonalSum(vector<vector<int>>& nums) {
4
5
6        int sum=0;
7        const int n=nums.size();
8        for(int i=0;i<nums.size();i++)
9        
10        {
11            for(int j=0;j<nums.size();j++)
12            if(i==j||i+j==n-1)
13            {
14                sum+=nums[i][j];
15            }
16        }
17        return sum;
18    }
19};