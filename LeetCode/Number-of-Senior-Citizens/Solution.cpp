class Solution {
public:
    int countSeniors(vector<string>& details) {

        int ans=0;
        for(auto &i:details)
        {
           string s="";
           char c1=i[11];
           char c2=i[12];
            s+=c1;s+=c2;
            int age=stoi(s);
            if(age>60)
            {
                ans++;
            }
        }
        return ans;
        
    }
};