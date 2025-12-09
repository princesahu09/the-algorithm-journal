1class Solution {
2public:
3    vector<int> sortEvenOdd(vector<int>& nums) {
4        vector<int>even;
5        even.reserve(nums.size());
6        vector<int>odd;
7        odd.reserve(nums.size());
8        for(int i=0;i<nums.size();i++)
9        {
10            if(i%2==0)even.push_back(nums[i]);
11            else
12            {
13                odd.push_back(nums[i]);
14            }
15        }
16        sort(odd.begin(),odd.end());
17        reverse(odd.begin(),odd.end());
18        sort(even.begin(),even.end());
19        
20        int e=0;
21        int o=0;
22       
23
24        for(int i=0;i<nums.size();i++)
25        {
26            if(i%2==0)
27            {
28                nums[i]=even[e++];
29               
30            }
31            else
32            {
33                nums[i]=odd[o++];
34                
35            }
36        }
37        return nums;
38
39
40
41        
42    }
43};