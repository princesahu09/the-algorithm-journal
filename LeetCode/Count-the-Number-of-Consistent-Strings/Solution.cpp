class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        vector<bool>present(26);
        int ans=0;

        for(auto &i:allowed)
        {
            present[i-'a']=true;
        }


        for(int i=0;i<words.size();i++)
        {
            string spell=words[i];
            bool status=true;

            for(int j=0;j<spell.size();j++)
            {
                char ch=spell[j];
                if(!present[ch-'a'])
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