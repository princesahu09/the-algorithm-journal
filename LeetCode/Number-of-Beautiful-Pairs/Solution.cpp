1class Solution {
2public:
3int digit(int num)
4{
5    int counter=0;
6    while(num>0)
7    {
8        num/=10;
9        counter++;
10    }
11    return counter;
12}
13
14bool check(int a,int b)
15{
16    int divider=pow(10,digit(a)-1);
17    int first=a/divider;
18    int last=b%10;
19    if(gcd(first,last)==1)return true;
20    else return false;
21
22}
23    int countBeautifulPairs(vector<int>& nums) {
24        const int n=nums.size();
25        int ans=0;
26
27        for(int i=0;i<n;i++)
28        {
29
30            for(int j=i+1;j<n;j++)
31            {
32
33                if(check(nums[i],nums[j]))
34                {
35                    ans++;
36                }
37            }
38        }
39        return ans;
40        
41    }
42};