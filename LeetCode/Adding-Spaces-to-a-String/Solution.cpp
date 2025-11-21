class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        queue<string>q;
        int start=0;
        string ans="";

        for(int i=0;i<spaces.size();i++)
        {
            int len=spaces[i]-start;
            string str=s.substr(start,len);
           q.push(str);
           start=spaces[i];

        }
        q.push(s.substr(start));
        while(!q.empty())
        {
            ans+=q.front()+" ";
            q.pop();
        }
        ans.pop_back();
        return ans;
    }
};