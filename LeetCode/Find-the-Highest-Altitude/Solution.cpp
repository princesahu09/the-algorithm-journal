1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4
5        int ans=0;
6        int sum=0;
7        for(int &i:gain)
8        {
9            sum+=i;
10            ans=max(ans,sum);
11        }
12        return ans;
13        
14    }
15};