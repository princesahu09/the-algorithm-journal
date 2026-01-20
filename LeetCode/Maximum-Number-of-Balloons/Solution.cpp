1class Solution {
2public:
3    int maxNumberOfBalloons(string text) {
4
5        unordered_map<char,int>freq;
6
7       
8
9        for(char &i:text)
10        {
11           freq[i]++;
12
13
14        }
15
16        
17        if(!freq.count('b'))return false;
18        if(!freq.count('a'))return false;
19        if(!freq.count('n'))return false;
20        if(!freq.count('o'))return false;
21        if(!freq.count('l'))return false;
22
23        int ans=INT_MAX;
24        for(auto &i:freq)
25        {
26            char ch=i.first;
27
28            if(ch=='b'||ch=='a'||ch=='n')
29            {
30                ans=min(ans,i.second);
31            }
32            else if(ch=='l'||ch=='o')
33            {
34                ans=min(ans,i.second/2);
35            }
36
37        }
38
39        return ans;
40
41       
42
43        
44        
45    }
46};