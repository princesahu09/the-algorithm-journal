1class Solution {
2public:
3    int minOperations(vector<int>& nums, int k) {
4
5        int x = 0;
6        for (auto& i : nums) {
7            x ^= i;
8        }
9        int count = 0;
10
11      for(int i=0;i<32;i++)
12      {
13        int r=(x>>i)&1;
14        int d=(k>>i)&1;
15        if(r!=d)count++;
16      }
17        return count;
18    }
19};