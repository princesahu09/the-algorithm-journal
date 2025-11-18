class Solution {
public:
    bool checkRecord(string s) {

        int absent=0;
        bool late=false;


        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                absent++;
            }
            if(s[i]=='L')
            {
                if(i+2<s.size()&&s[i+1]=='L'&&s[i+2]=='L')
                {
                    late=true;
                }
            }

        }
        if (absent >= 2 || late == true) {
            return false;
        }


        return true;
        
    }
};