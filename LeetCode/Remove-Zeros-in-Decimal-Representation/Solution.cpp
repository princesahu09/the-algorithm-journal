class Solution {
public:
    long long removeZeros(long long n) {

    long long ans=0;

    while(n>0)
    {
        int r=n%10;
        if(r!=0)
        {
            ans=ans*10+r;
        }
        n/=10;

    }
   string re=to_string(ans);
    reverse(re.begin(),re.end());
    ans=stol(re);
    return ans;
   
        
    }
};