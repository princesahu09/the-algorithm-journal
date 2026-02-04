1class Solution {
2public:
3
4void transformer(string& str)
5{
6    for(int i=0;i<str.size();i++)
7    {
8        if(str[i]>='A'&&str[i]<='Z')
9        {
10            str[i]=char(str[i]+32);
11        }
12    }
13}
14    int countKeyChanges(string s) {
15
16        int ans=0;
17        transformer(s);
18        cout<<s<<endl;
19
20        for(int i=0;i<s.size();i++)
21        {
22            int j=i+1;
23            for(;j<s.size();j++)
24            {
25                if(s[j]!=s[i])
26                {
27                    ans++;
28                    i=j-1;
29                    break;
30                    
31                }
32                else
33                {
34                    continue;
35                }
36            }
37
38            if(j==s.size())return ans;
39
40            
41          
42        
43        }
44
45       
46        return ans;
47        
48    }
49};