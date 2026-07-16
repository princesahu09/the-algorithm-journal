1class Solution {
2public:
3    long long gcdSum(vector<int>& nums) {
4
5        const int n=nums.size();
6        vector<int>prefixGcd(n,0);
7        int high=INT_MIN;
8        for(int i=0;i<n;i++)
9        {
10            high=max(high,nums[i]);
11            prefixGcd[i]=gcd(high,nums[i]);
12        }
13        sort(prefixGcd.begin(),prefixGcd.end());
14
15        int start=0;
16        int end=n-1;
17        long long ans=0;
18        while(start<end){
19
20            ans+=gcd(prefixGcd[start],prefixGcd[end]);
21            start++;
22            end--;
23        }
24        return ans;
25        
26    }
27};