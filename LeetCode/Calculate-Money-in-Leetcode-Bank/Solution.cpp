class Solution {
public:
    int totalMoney(int n) {

        int monday=1;
        int sum=0;
        int counter=0;

        for(int i=1;i<=n;)
        {
            int j=1;int adder=monday;
            while(i<=n&&j<=7)
            {
                sum+=adder;
                adder++;
                i++;
                j++;

            }
            monday++;




        }
        return sum;
        
    }
};