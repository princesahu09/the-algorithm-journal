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
19        for(int i=0;i<words.size();i++)
20        {
21
22            for(int j=i+1;j<words.size();j++)
23            {
24
25                if(i!=j&&bitmask(words[i])==bitmask(words[j]))
26                {
27                    ans++;
28                }
29            }
30        }
31
32        return ans;
33        
34    }
35};