1class Solution {
2public:
3
4bool isValid(vector<int>&p,int hours,int maxAllow)
5{
6   
7    long long h=0;
8    for(int i=0;i<p.size();i++)
9    {
10        if(maxAllow==0)return false;
11        h+= (p[i] + maxAllow - 1) / maxAllow;
12       
13    }
14    return h>hours?false:true;
15}
16    int minEatingSpeed(vector<int>& p, int h) {
17        
18        long long start=1;
19        long long end=*max_element(p.begin(),p.end());
20        long long ans=0;
21
22        while(start<=end)
23        {
24            long long mid=start+(end -start)/2;
25            if(isValid(p,h,mid))
26            {
27                ans=mid;
28                end=mid-1;
29            }
30            else
31            {
32                start=mid+1;
33            }
34
35        }
36        return ans;
37    }
38};