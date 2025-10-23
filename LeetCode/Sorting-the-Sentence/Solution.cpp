class Solution {
public:
    string sortSentence(string s) {

        vector<string>words(10);
        string ans;

        stringstream ss(s);
        string word;
        while(ss >> word)
        {
            char last=word.back();
            word.pop_back();
            words[last-'0']=word;
        }
        for(int i=1;i<words.size();i++)
        {
            if(words[i]!="")
            {
                if(!ans.empty())
                
                   { ans+=" ";}
                    ans+=words[i];
                
            }
        }
        return ans;

        
    }
};