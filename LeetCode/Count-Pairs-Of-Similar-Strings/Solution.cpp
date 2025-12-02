1class Solution {
2
3    private:  int bitmask(string str)
4    {
5        int n=0;
6
7        for(auto &i:str)
8        {
9            n=n|(1<<(i-'a'));
10        }
11
12        return n;
13    }
14public:
15    int similarPairs(vector<string>& words) {
16
17        int ans=0;
18
19        vector<int>masks(words.size(),0);
20
21        for(int i=0;i<words.size();i++)
22        {
23            masks[i]=bitmask(words[i]);
24        }
25
26        for(int i=0;i<words.size();i++)
27        {
28
29            for(int j=i+1;j<words.size();j++)
30            {
31
32                if(masks[i]==masks[j])
33                {
34                    ans++;
35                }
36            }
37        }
38
39        return ans;
40        
41    }
42};