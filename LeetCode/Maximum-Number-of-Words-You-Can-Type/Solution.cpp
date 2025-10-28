class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<bool>key(26,true);

        for(auto &i:brokenLetters)
        {
            key[i-'a']=false;
        }
        stringstream ss(text);
        string word;
        int ans=0;

        while(ss >> word)
        {
            bool status=true;
            for(auto &i:word)
            {
               if( !key[i-'a'])
               {
                status=false;
                break;
                

               }
            }
            if(status)
            {
                ans++;
            }
        }

        return ans;
        
    }
};