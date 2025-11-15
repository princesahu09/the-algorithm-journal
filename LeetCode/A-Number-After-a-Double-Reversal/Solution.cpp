class Solution {

    int reverse(int num)
    {
        int ans=0;
        while(num>0)
        {
            ans=ans*10+(num%10);
            num/=10;
        }
        return ans;

    }
public: 
    bool isSameAfterReversals(int num) {

        int r=reverse(num);
        r=reverse(r);

        return num==r?true:false;
        
    }
};