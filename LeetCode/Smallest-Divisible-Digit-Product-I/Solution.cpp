class Solution {
public:
int product(int n)
{
     int product=1;

        while(n>0)
        {
            product*=n%10;
            n/=10;
        }
        return product;

}
    int smallestNumber(int n, int t) {


        for(int i=n;;i++)
        {
            if(product(i)%t==0)return i;
        }

       
        
    }
};