class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int n1=word1.size();
        int n2=word2.size();
        string ans="";
        ans.reserve(n1+n2);
        int i=0;
        int j=0;
        while(i<n1||j<n2)

        {
           if(i<n1)ans+=word1[i++];
           if(j<n2)ans+=word2[j++];
        }
       

        return ans;
    }
};