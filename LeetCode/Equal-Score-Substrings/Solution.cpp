1class Solution {
2public:
3    bool scoreBalance(string s) {
4
5
6        vector<int>prefix(s.size(),0);
7        vector<int>suffix(s.size(),0);
8        const int n=s.size();
9
10       
11        prefix[0]=s[0];
12        
13        suffix[n-1]=s[n-1];
14
15
16        for(int i=1;i<s.size();i++)
17        {
18             
19            prefix[i]=prefix[i-1]+(s[i]-'a')+1;
20            
21        }
22        for(int i=n-2;i>=0;i--)
23        {
24           suffix[i]=suffix[i+1]+(s[i]-'a')+1;      ;
25            
26        }
27
28        for(int i=0;i+1<n;i++)
29        {
30            if(prefix[i]==suffix[i+1])
31            {
32                return true;
33            }
34        }
35
36        return false;
37        
38    }
39};