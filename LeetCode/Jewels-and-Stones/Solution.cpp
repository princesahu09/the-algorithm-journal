class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        vector<int>chote(26);
        vector<int>bade(26);


        for(int i=0;i<jewels.size();i++)
        {
            char ch=jewels[i];
            if((int)ch>=65&&(int)ch<=90)
           { chote[ch-'A']+=1;}
            else
            {
                bade[ch-'a']+=1;
            }
        }
        int ans=0;

        for(int j=0;j<stones.size();j++)
        {
            char ch=stones[j];
            if((int)ch>=65&&(int)ch<=90)
            {
                ans+=chote[ch-'A'];
            }
            else
            {
                ans+=bade[ch-'a'];
            }
        }

        return ans;

       


        
    }
};