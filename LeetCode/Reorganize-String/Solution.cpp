class Solution {
public:
    string reorganizeString(string s) {
        const int n=s.size();
        vector<int>letter(26,0);
        for(char &i:s)
        {
            letter[i-'a']++;
        }
        int index=0;
        int high=letter[0];
        for(int i=1;i<26;i++)
        {
            if(letter[i]>high)
            {
                index=i;
                high=letter[i];
            }
        }

        if(high>(n+1)/2)return "";
        string ans(n,' ');
        int pos=0;

        while(letter[index]>0)
        {
            ans[pos]=char(index+'a');
            letter[index]--;
            pos+=2;
        }

       
        for(int i=0;i<26;i++)
        {
            while(letter[i]>0)
            {
                if(pos>=n)pos=1;
                ans[pos]=char(i+'a');
                pos+=2;
                letter[i]--;
            }
        }

        return ans;

        
    }
};