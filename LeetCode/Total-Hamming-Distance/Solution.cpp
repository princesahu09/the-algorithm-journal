1class Solution {
2
3    
4public:
5    int totalHammingDistance(vector<int>& nums) {
6        
7        int sum=0;
8        const int n=nums.size();
9
10        for(int bit=0;bit<31;bit++)
11        {
12            int one=0;
13
14            for(int &i:nums)
15            {
16                if(i&(1<<bit))one++;
17            }
18            int zero=n-one;
19            sum+=one*zero;
20        }
21
22
23        return sum;
24    }
25};