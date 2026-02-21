1class Solution {
2public:
3int charSum(string& temp)
4{
5    int ans=0;
6    for(auto &i:temp)
7    {
8        ans+=(i-'a');
9    }
10    return ans;
11}
12    string stringHash(string s, int k) {
13
14        const int n=s.size();
15        string ans="";
16        int i=0;
17        while(i<n)
18        {
19            string temp=s.substr(i,k);
20            int sum=charSum(temp);
21            ans+=((sum%26)+'a');
22            i+=k;
23
24        }
25        return ans;
26        
27    }
28};