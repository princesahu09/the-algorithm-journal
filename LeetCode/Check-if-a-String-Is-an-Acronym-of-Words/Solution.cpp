class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {

        string acro="";
        for(auto &i:words)
        {
            acro+=i[0];
        }
        return acro==s;
        
    }
};