1class Solution {
2public:
3
4string big(string &str)
5{
6    for(int i=0;i<str.size();i++)
7    {
8        str[i]=str[i]|' ';
9
10    }
11
12    
13
14    return str;
15}
16    string capitalizeTitle(string title) {
17
18        string ans="";
19
20        stringstream ss(title);
21        string word;
22
23        while(ss>>word)
24        {
25
26              word=big(word);
27            if(word.size()>2)
28            {
29                
30              
31               word[0]&='_';
32                ans+=word;
33
34            }
35            else
36            {
37
38               
39                ans+=word;
40
41            }
42                ans+=' ';
43
44        }
45        ans.pop_back();
46        return ans;
47        
48    }
49};