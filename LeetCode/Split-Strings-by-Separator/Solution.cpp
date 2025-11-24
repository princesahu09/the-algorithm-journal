class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;

        for(auto &i:words)
        {
            stringstream ss(i);
            string word;
            while(getline(ss,word,separator))
            {
                if(word!="")
                ans.push_back(word);
            }

        }
        return ans;
        
    }
};