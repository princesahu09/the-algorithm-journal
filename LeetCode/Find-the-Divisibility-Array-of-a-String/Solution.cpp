1class Solution {
2public:
3    vector<int> divisibilityArray(string word, int m) {
4
5
6        vector<int>prefix(word.size(),0);
7        typedef long long ll;
8
9
10        ll number=0;
11        for(int i=0;i<word.size();i++)
12        {
13            number=(number*10+(word[i]-'0'))%m;
14            if(number==0)
15            {
16                prefix[i]=1;
17
18            }
19            
20        }
21
22        return prefix;
23        
24    }
25};