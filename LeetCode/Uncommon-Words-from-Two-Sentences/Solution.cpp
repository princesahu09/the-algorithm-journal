class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        vector<string>ans;
        unordered_map<string,int>disjoint;

        stringstream ss(s1);
        string word;
        while(ss>>word)
        {
            disjoint[word]++;

        }
        stringstream sb(s2);
        while(sb>>word)
        {
            disjoint[word]++;
        }

        for(auto &i:disjoint)
        {

            if(i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;

        
        
    }
};