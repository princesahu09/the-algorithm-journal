1class Solution {
2public:
3bool check(int n)
4{
5    if(n<2)return false;
6   
7    for(int i=2;i*i<=n;i++)
8    {
9        if(n%i==0)
10        {
11            return false;
12        }
13    }
14    return true;
15}
16    int diagonalPrime(vector<vector<int>>& nums) {
17
18        const int n=nums.size();
19        int prime=0;
20
21        for(int i=0;i<n;i++)
22        {
23
24            int j=n-i-1;
25            if(check(nums[i][i]))
26            {
27                prime=max(prime,nums[i][i]);
28            }
29            if(check(nums[i][j]))
30            {
31                prime=max(prime,nums[i][j]);
32            }
33            
34        }
35
36        return prime;
37        
38    }
39};