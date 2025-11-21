class Solution {
public:
    bool rotateString(string s, string goal) {

        const int n=s.size();
        queue<char>q1(s.begin(),s.end());
        queue<char>q2(goal.begin(),goal.end());
        int i=0;

        while(i<n)
        {
           if(q1==q2)
           {
            return true;
           }
           char pehla=q1.front();
           q1.pop();
           q1.push(pehla);


        
            i++;
        }

        return false;
        
    }
};