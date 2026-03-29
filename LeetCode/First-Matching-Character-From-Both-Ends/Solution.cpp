1class Solution {
2public:
3    int firstMatchingIndex(string s) {
4
5        int start=0;
6        int end=s.size()-1;
7        while(start<=end)
8        {
9            if(s[start]==s[end])
10            {
11                return start;
12            }
13            start++;
14            end--;
15        }
16
17        return -1;
18        
19    }
20};