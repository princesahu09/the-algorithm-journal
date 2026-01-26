1class Solution {
2public:
3    int smallestAbsent(vector<int>& nums) {
4
5        const int n=nums.size();
6
7        int sum=accumulate(nums.begin(),nums.end(),0);
8        
9        int avg=ceil(sum/n);
10        unordered_set<int>seen(nums.begin(),nums.end());
11        
12
13    int number=1;
14       while(true)
15       {
16        if(!seen.count(number)&&number>avg){return number;}
17        number++;
18       }
19            
20
21       return -1;;
22        
23    }
24};