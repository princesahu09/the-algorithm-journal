1class Solution {
2public:
3    string greatestLetter(string s) {
4
5        int high=0;
6        int low=0;
7
8        for(auto &i:s)
9        {
10            if(i>='a'&&i<='z')
11            {
12                low|=(1<<(i-'a'));
13                
14            }
15            else
16            {
17                high|=(1<<(i-'A'));
18            }
19        }
20        int result=high&low;
21      
22        for(int i=25;i>=0;i--)
23        {
24            int r=(result>>i)&1;
25            if(r==1)
26            {
27                char ch='A'+i;
28                return string(1,ch);
29            }
30        }
31      return "";
32       
33        
34    }
35};