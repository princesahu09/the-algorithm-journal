1class Solution {
2public:
3    int findKOr(vector<int>& nums, int k) {
4       vector<int>bitone(32,0);
5
6      for(int i=0;i<nums.size();i++)
7       {
8        int pos=0;int temp=nums[i];
9        while(temp>0)
10        {
11            if(temp&1){
12                bitone[pos]+=1;
13            }
14            pos++;
15            temp>>=1;
16        }
17       }
18
19       int ans=0;
20       for(int i=0;i<32;i++)
21       {
22        if(bitone[i]>=k)
23        {
24            ans|=(1<<i);
25        }
26       }
27
28        return ans;
29    }
30};