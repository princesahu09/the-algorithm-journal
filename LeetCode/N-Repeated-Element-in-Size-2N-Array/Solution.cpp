1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4
5        const int l=nums.size();
6        int n=l/2;
7
8        unordered_map<int,int>freq;
9        for(int &i:nums)
10        {
11            freq[i]++;
12        }int ans=0;
13        for(auto &i:freq)
14        {
15            if(i.second==n){ans=i.first;break;}
16        }return ans;
17        
18    }
19};