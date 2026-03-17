1class Solution {
2public:
3    vector<string> cellsInRange(string s) {
4
5        vector<string>ans;
6
7        for(char i=s[0];i<=s[3];i++)
8        {
9            for(char j=s[1];j<=s[4];j++)
10            {
11                string temp="";
12                temp.push_back(i);
13                temp.push_back(j);
14                ans.push_back(temp);
15            }
16        }
17
18        return ans;
19        
20    }
21};