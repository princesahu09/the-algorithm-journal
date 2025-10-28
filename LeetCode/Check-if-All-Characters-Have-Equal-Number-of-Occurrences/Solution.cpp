class Solution {
public:
    bool areOccurrencesEqual(string s) {

        unordered_map<char,int>freq;

        for(auto &i:s)
        {
            freq[i]++;
        }
        int starter=freq.begin()->second;

        for(auto &i:freq)
        {
            if(i.second!=starter)
            {
                return false;

            }
        }

        return true;

        
    }
};