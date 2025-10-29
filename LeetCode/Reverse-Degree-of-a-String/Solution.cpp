class Solution {
public:
    int reverseDegree(string s) {
        vector<int>letter(26,0);
        int alpha=26;
        int sum=0;

        for(int i=0;i<letter.size();i++)
        {
            letter[i]=alpha;
            alpha--;
        }
        int p=1;

        for(int i=0;i<s.size();i++)
        {
            sum+=p*letter[s[i]-'a'];
            p++;

        }
        return sum;
        
    }
};