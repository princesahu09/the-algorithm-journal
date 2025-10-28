class Solution {
public:
    bool checkIfPangram(string sentence) {

        vector<bool>letter(26,false);

        for(auto &i:sentence)
        {
            letter[i-'a']=true;
        }
       return all_of(letter.begin(), letter.end(), [](bool x){ return x; });

        
    }
};