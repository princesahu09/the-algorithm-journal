1class Solution {
2public:
3    char nextGreatestLetter(vector<char>& letters, char target) {
4
5       
6        int bitmask=0;
7        char ans=letters[0];
8
9        for(char &ch:letters)
10        {
11            bitmask|=(1<<(ch-'a'));
12        }
13
14        int searcher =target-'a';
15        searcher+=1;
16        while(searcher<26)
17        {
18          
19            if(bitmask&(1<<searcher))
20            {
21                return char(searcher+'a');
22             
23            }
24            searcher++;
25
26        }
27
28        return letters[0];
29
30        
31    }
32};