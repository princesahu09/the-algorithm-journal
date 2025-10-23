class Solution {
public:
    bool digitCount(string num) {

        vector<int>freq(10);

        for(auto &i:num)
        {
            freq[i-'0']+=1;
        }
        for(int i=0;i<num.size();i++)
        {
            if(freq[i]!=num[i]-'0')
            {
                return false;
            }
          
        }
        return true;
        
    }
};