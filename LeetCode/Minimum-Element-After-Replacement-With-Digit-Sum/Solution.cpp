class Solution {
public:

int sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;n/=10;
    }
    return sum;
}
    int minElement(vector<int>& nums) {
        int  small=INT_MAX;

        for(auto &i:nums)
        {
            small=min(small,sum(i));

        }
        return small;
        
    }
};