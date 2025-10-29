class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

        vector<int>ans;
        int j=0;
        for(auto &i:words)
        {
            if(i.find(x)!=string::npos)
            {
                ans.push_back(j);
                j++;
            }
            else
            {
                j++;
            }
        }
        return ans;
        
    }
};