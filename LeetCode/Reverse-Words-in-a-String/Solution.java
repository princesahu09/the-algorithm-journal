1class Solution {
2public:
3    string reverseWords(string s) {
4
5        stringstream ss(s);
6        string word;
7        string ans = "";
8        stack<string>words;
9
10        while (ss >> word) {
11            words.push(word);
12           
13        }
14        while(!words.empty())
15        {
16            string r=words.top();
17            ans+=r+" ";
18            words.pop();
19        }
20        ans.pop_back();
21       return ans;
22    }
23};