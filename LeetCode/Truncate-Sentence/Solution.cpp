class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word;
        int i=0;
        string ans="";

        while(ss >> word&&i<k)
        {
            ans+=word+" ";
            i++;


        }
        ans.pop_back();
        return ans;
        
    }
};