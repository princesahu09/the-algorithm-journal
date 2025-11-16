class Solution {
public:
    int numSub(string s) {

        int i=0;
        long long total=0LL;
        long long count=0;
        const long long MOD=1e9+7;
        while(i<s.size())
        {
            if(s[i]=='0')
            {
              total = (total + (count * (count + 1) / 2) % MOD) % MOD;
                count=0;
            }
            else
            {
                count++;
            }
            i++;
        }
             total = (total + (count * (count + 1) / 2) % MOD) % MOD;

              


        return total;
        
    }
};