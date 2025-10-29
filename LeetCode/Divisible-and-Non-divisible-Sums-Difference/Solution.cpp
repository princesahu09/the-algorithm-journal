class Solution {
public:
    int differenceOfSums(int n, int m) {

        int m1=0;
        int m2=0;

        for(int i=1;i<=n;i++)
        {
            if(i%m!=0)m1+=i;
            else m2+=i;
        }
        return m1-m2;
        
    }
};