1class Solution {
2public:
3    int averageValue(vector<int>& nums) {
4
5        int ans=0;
6        int divider=0;
7        for(int &i:nums)
8        {
9            if(i%2==0&&i%3==0)
10            {
11                ans+=i;
12                divider++;
13            }
14        }
15        if(divider==0)return 0;
16        return ans/divider;
17        
18    }
19};