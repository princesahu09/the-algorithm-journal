1class Solution {
2public:
3    bool checkInclusion(string s1, string s2) {
4
5
6        vector<int>letter(26,0);
7        for(auto &i:s1)
8        {
9            letter[i-'a']++;
10        }
11
12        
13        int l=s1.size();
14
15        for(int i=0;i<s2.size();i++)
16        {
17
18            int j=i;
19            int start=0;
20            vector<int>freq(26,0);
21            while(j<s2.size()&&start<l)
22            {
23                freq[s2[j]-'a']++;
24                j++;
25                start++;
26
27            }
28            if(freq==letter)return true;
29
30        }
31        return false;
32        
33        
34    }
35};