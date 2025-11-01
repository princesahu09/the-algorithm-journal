class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        int i=n;
        long long  m=1;
        while(i>0)
        {
            long long r=i%10;
            if(r!=0)
          {  ans.push_back(r*m);}
            i/=10;
            m*=10;
        }

       
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};