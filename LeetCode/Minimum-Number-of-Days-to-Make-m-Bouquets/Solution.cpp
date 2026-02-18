1class Solution {
2public:
3
4bool isValid(vector<int>&bloomDay,int m,int k,int maxAllow)
5{
6    int flower=0;
7    int bou=0;
8    for(int i=0;i<bloomDay.size();i++)
9    {
10
11        if(bloomDay[i]<=maxAllow)
12        {
13
14            flower++;
15            if(flower==k)
16            {
17                bou++;
18                flower=0;
19            }
20
21        }
22        else
23        {
24            flower=0;
25        }
26
27
28    }
29    return bou>=m;
30}
31    int minDays(vector<int>& bloomDay, int m, int k) {
32
33        long long total=(long long )m*k;
34        if(total>bloomDay.size())return -1;
35
36        long long start=1;
37        long long end=*max_element(bloomDay.begin(),bloomDay.end());
38        int ans=0;
39
40
41        while(start<=end)
42        {
43            long long mid=start+(end-start)/2;
44
45
46            if(isValid(bloomDay,m,k,mid))
47            {
48                ans=mid;
49                end=mid-1;
50            }
51            else
52            {
53                start=mid+1;
54            }
55        }
56
57        return ans;
58        
59    }
60};