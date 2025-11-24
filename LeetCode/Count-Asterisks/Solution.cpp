class Solution {
public:
    int countAsterisks(string s) {
        

        int ans=0;
        bool toggle=true;
        for(char &i:s)
        {
            if(i=='|')
            {
                toggle=!toggle;
            }
          else  if(toggle&&i=='*')
            {
                ans++;
            }
            
        }
        return ans;
    }
};