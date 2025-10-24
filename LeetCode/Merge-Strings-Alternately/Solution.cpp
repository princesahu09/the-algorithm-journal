class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        bool toggle=true;
        string ans="";
        int i=0;
        int j=0;
        while(i<word1.size()&&j<word2.size())

        {
            if(toggle)
            {
                ans+=word1[i];i++;
                toggle=!toggle;
            }
           else
            {
                ans+=word2[j];j++;
                toggle=!toggle;
            }

        }
        while(i<word1.size())
        {
            ans+=word1[i];
            i++;
        }
        while(j<word2.size())
        {
            ans+=word2[j];
            j++;
        }

        return ans;
    }
};