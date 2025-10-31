class Solution {
public:
    int getLeastFrequentDigit(int n) {
        
        vector<int>number(10,0);
        while(n>0)
        {
            number[n%10]++;
            n/=10;
        }
        int low=INT_MAX;
        int idx=INT_MAX;
        for(int i=1;i<number.size();i++)
        {
            if(number[i]>0)
            {low=min(low,number[i]);}
        }
        
        for(int i=1;i<number.size();i++)
        {
            if(low==number[i])
            {
                idx=min(idx,i);
            }
        }
        if(number[0]!=0)
        {
            if(low>=number[0])
            {
               idx=0;
            }
        }

        return idx;

        
    }
};