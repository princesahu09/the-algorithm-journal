1class Solution {
2public:
3
4    int solve(vector<int>&temp)
5    {
6        int start=0;
7        int end=temp.size()-1;
8        int ans=0;
9
10        while(start<=end)
11            {
12                ans+=abs(temp[start]-temp[end]);
13                start++;
14                end--;
15            }
16
17        return ans;
18    }
19    int mirrorFrequency(string s) {
20
21        vector<int>freq(26,0);
22        vector<int>digit(10,0);
23
24        for(auto &i:s)
25            {
26                if(i>='0'&&i<='9')
27                {
28                    digit[i-'0']++;
29                }
30                else if(i>='a'&&i<='z')
31                {
32                    freq[i-'a']++;
33                }
34            }
35
36        int ans=0;
37        ans+=solve(freq);
38        ans+=solve(digit);
39
40        return ans;
41        
42    }
43};