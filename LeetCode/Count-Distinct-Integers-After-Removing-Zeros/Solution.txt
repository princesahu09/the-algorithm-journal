class Solution {



public:
    long long countDistinct(long long n) {
        long long ans = 0;
        string s = to_string(n);
        const int len = s.size();
        
        for(int i=1;i<len;i++)
        {
            ans+=pow(9,i);
        }

        for (int i = 0; i < len; i++) {
            int digit = s[i] - '0';

            for (int d = 1; d < digit; d++)
                ans += pow(9, len - i - 1);

            if (digit == 0)
                return ans;
        }
         if(s.find('0') == string::npos)
            ans++;

        return ans;
    }
};