class Solution {
public:
    string reverseWords(string s) {

        stringstream ss(s);
        string word;
        string ans = "";
        stack<string>words;

        while (ss >> word) {
            words.push(word);
           
        }
        while(!words.empty())
        {
            string r=words.top();
            ans+=r+" ";
            words.pop();
        }
        ans.pop_back();
       return ans;
    }
};