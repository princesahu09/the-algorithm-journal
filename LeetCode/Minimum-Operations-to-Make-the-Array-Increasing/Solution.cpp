1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4
5
6        int ans=0;
7
8       // sort(nums.begin(),nums.end());
9
10
11        for(int i=0;i+1<nums.size();i++)
12        {
13            if(nums[i]<nums[i+1])
14            {
15                continue;
16              
17            }
18
19            if(nums[i]==nums[i+1])
20            {
21                ans++;
22                nums[i+1]+=1;
23            }
24            else
25            {
26                int adder=abs(nums[i]-nums[i+1]);
27                adder+=1;
28                ans+=adder;
29                nums[i+1]+=adder;
30
31            }
32            
33        }  
34        return ans;      
35    }
36};