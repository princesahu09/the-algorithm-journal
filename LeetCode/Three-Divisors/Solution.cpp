class Solution {
public:
    bool isThree(int n) {
        int counter =2;

        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                counter++;
            }
        }
        return counter==3?true:false;
        
    }
};