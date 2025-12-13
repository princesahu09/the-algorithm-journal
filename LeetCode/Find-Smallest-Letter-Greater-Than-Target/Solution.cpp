1class Solution {
2public:
3    char nextGreatestLetter(vector<char>& letters, char target) {
4
5        char ans=letters[0];
6        sort(letters.begin(),letters.end());
7        for(int i=0;i<letters.size();i++)
8        {
9            if(letters[i]>target)
10            {
11                ans=letters[i];
12                break;
13            }
14        }
15        return ans;
16        
17    }
18};