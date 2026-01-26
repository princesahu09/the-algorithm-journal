1class Solution {
2public:
3
4string dummy(string &str)
5{
6    reverse(str.begin(),str.end());
7    return str;
8}
9
10
11    int maximumNumberOfStringPairs(vector<string>& words) {
12
13        unordered_map<int,int>mapping;
14
15        for(int i=0;i<words.size();i++)
16        {
17            for(int j=0;j<words.size();j++)
18            {
19                if(words[i]==dummy(words[j])&&i!=j&&!mapping.count(i)&&!mapping.count(j))
20                {
21                    mapping[i]=j;
22                    mapping[j]=i;
23
24                }
25            }
26        }
27
28        return mapping.size()/2;
29
30        
31
32
33        
34    }
35};