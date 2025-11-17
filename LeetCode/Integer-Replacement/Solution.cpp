class Solution {
public:
    int integerReplacement(int n) {
        if(n==1)return 0;
        long long x=n;
      int  counter=0;

        while(x!=1&&x>0)
        {
            if(x%2==0)
            {
                x/=2;
            }
            else
            {
               if (x == 3 || (x& 3) == 1) {
                    x -= 1;
                } else {
                    x += 1;
                }
            }
            counter++;
        }
        return counter;
        
    }
};