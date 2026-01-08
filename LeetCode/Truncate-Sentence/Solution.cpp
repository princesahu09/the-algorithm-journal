1class Solution {
2public:
3    string truncateSentence(string s, int k) {
4        stringstream ss(s);
5        string word;
6        int i=0;
7        string ans="";
8
9        while(ss >> word&&i<k)
10        {
11            ans+=word+" ";
12            i++;
13
14
15        }
16        ans.pop_back();
17        return ans;
18        
19    }
20};