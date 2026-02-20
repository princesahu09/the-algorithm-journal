1class Solution {
2public:
3bool check(string temp)
4{
5    for(auto &i:temp)
6    {
7        if(i>='0'&&i<='9')
8        {
9            continue;
10        }
11        else
12        {
13            return false;
14        }
15    }
16    return true;
17}
18    int maximumValue(vector<string>& strs) {
19
20        int value=INT_MIN;
21
22        for(auto &word:strs)
23        {
24
25            if(check(word))
26            {
27                value=max(value,stoi(word));
28            }
29            else
30            {
31                int len=word.size();
32                value=max(value,len);
33            }
34            
35        }
36        return value;
37        
38    }
39};