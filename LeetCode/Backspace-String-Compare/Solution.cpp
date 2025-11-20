class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char>a,b;

        for(auto &i:s)
        {
            if(i=='#'&&!a.empty())
            {
                a.pop();
            }
            else if(i!='#')
            {
                a.push(i);
            }
        }
         for(auto &i:t)
        {
            if(i=='#'&&!b.empty())
            {
                b.pop();
            }
            else if(i!='#')
            {
                b.push(i);
            }
        }

        return a==b;

        
    }
};