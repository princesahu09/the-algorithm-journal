class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flip=0;

        while(start>0||goal>0)
        {
            
            if(start>0&&goal>0)
            {
                if((start&1)!=(goal&1))
                {
                    flip++;
                }
            }
           else if(start>0)
            {
                if(start&1==1)
                {
                    flip++;
                }
            }
            else if(goal>0)
            {

                if(goal&1==1)
                {
                    flip++;
                }
            }
            start>>=1;
            goal>>=1;
            
        }

        return flip;
        
    }
};