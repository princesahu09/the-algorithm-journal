1class Solution {
2public:
3bool isValid(vector<int>&p,int m,int maxAllow)
4{
5    int ball=1;
6    int pos=p[0];
7    for(int i=1;i<p.size();i++)
8    {
9        if(p[i]-pos>=maxAllow)
10        {
11            ball++;
12            pos=p[i];
13        }
14
15        if(ball>=m)return true;
16    }
17    return false;
18}
19    int maxDistance(vector<int>& p, int m) {
20
21        sort(p.begin(),p.end());
22        const int n=p.size();
23
24        int start=1;
25        int end=p[n-1]-p[0];
26        int ans=0;
27
28        while(start<=end)
29        {
30            long long mid=start+(end-start)/2;
31
32            if(isValid(p,m,mid))
33            {
34                ans=mid;
35                start=mid+1;
36            }
37            else
38            {
39                end=mid-1;
40            }
41        }
42
43        return ans;
44        
45    }
46};