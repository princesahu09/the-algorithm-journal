1class Solution {
2public:
3void transformer(string &str)
4{
5    if(str[0]>='a'&&str[0]<='z')
6    {
7        str[0]=char(str[0]-32);
8    }
9    for(int i=1;i<str.size();i++)
10    {
11        if(str[i]>='A'&&str[i]<='Z')
12        {
13            str[i]=char(str[i]+32);
14        }
15    }
16}
17    string generateTag(string caption) {
18
19        stringstream ss(caption);
20        string word;
21        string ans="#";
22        while(ss>>word)
23        {
24            transformer(word);
25            ans+=word;
26           
27
28            
29        }
30        if(ans[1]>='A'&&ans[1]<='Z')
31        {
32            ans[1]=char(ans[1]+32);
33        }
34
35        return ans.substr(0,100);
36        
37    }
38};