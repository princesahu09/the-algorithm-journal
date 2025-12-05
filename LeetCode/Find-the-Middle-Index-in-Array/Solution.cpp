1class Solution {
2public:
3    int findMiddleIndex(vector<int>& nums) {
4
5        const int sum = accumulate(nums.begin(), nums.end(), 0);
6        int left = 0;
7        int right = sum;
8        
9
10        int start = -1;
11        while (start+1 < nums.size()) {
12
13            left+=(start>=0?nums[start]:0);
14            int mid=start+1;
15            right=sum-left-nums[mid];
16          
17            if (left == right) {
18               return mid;
19            }
20            
21            start++;
22        }
23        return -1;
24    }
25};