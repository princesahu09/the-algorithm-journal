class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        unordered_map<string,int>disjoint;

        stringstream ss(s1+" "+s2);
        string word;
        while(ss>>word)
        {
            disjoint[word]++;

        }
        vector<string>ans;
        ans.reserve(disjoint.size());
        
        

        for(auto &i:disjoint)
        {

            if(i.second==1){
                ans.push_back(i.first);
            }
        }
        return ans;

        
        
    }
};