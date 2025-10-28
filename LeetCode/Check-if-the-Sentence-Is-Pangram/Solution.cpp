class Solution {
public:
    bool checkIfPangram(string sentence) {

        vector<bool>letter(26,false);

        for(auto &i:sentence)
        {
            letter[i-'a']=true;
        }
        for(int i=0;i<letter.size();i++)
        {
            if(!letter[i])return false;
        }
        return true;
        
    }
};