class Solution {
public:
    int percentageLetter(string s, char letter) {
        


        const int n=s.size();
        if(n==0)return 0;
        int num=0;

        for(char &i:s)
        {
            if(i==letter)
            {
                num++;

            }
        }
        num*=100;
        int percent=floor(num/n);
        

        return percent;
        
    }
};