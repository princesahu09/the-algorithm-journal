class Solution {
public:
    int divisorSubstrings(int num, int k) {


        int ans=0;
        string s=to_string(num);
        for(int i=0;i+k<=s.size();i++)
        {
            string temp=s.substr(i,k);
            int number=stoi(temp);
            if(number>0&&num%number==0)
            {
                ans++;
            }
        }
        return ans;
        
    }
};