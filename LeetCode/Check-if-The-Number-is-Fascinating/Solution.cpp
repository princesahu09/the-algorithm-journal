class Solution {
public:
    bool isFascinating(int n) {

        vector<int>number(10);
        string num=to_string(n)+to_string(2*n)+to_string(3*n);

        long long i=stol(num);

        while(i>0)
        {
            number[i%10]++;
            i/=10;
        }
        for(int i=1;i<number.size();i++)
        {

            if(number[i]==1)
            {
               continue;
            }
            else
            {
                return false;
            }
        }
        return true;



        
    }
};