1class Solution {
2public:
3
4void cycle(vector<int>&arr,int k)
5
6
7{
8    const int n=arr.size();
9    
10    k=k%arr.size();
11
12    reverse(arr.begin(),arr.begin()+k);
13    reverse(arr.begin()+k,arr.end());
14    reverse(arr.begin(),arr.end());
15}
16    vector<int> rotateElements(vector<int>& nums, int k) {
17
18
19        vector<int>rotated;
20
21        for(int i=0;i<nums.size();i++)
22        {
23            if(nums[i]>=0)
24            {
25                rotated.push_back(nums[i]);
26            }
27        }
28        if(rotated.size()>0){
29        cycle(rotated,k);}
30
31
32        int start=0;
33        for(int i=0;i<nums.size();i++)
34        {
35            if(nums[i]>=0)
36            {
37                nums[i]=rotated[start];
38                start++;
39            }
40        }
41
42        return nums;
43        
44    }
45};