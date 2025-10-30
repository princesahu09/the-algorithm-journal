class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>gmail;

        for(auto email:emails)
        {
            int ass=email.find("@");

            string local=email.substr(0,ass);
            string domain=email.substr(ass+1);
            int plus=local.find("+");

            if(plus!=string::npos)
            {
                local=local.substr(0,plus);
            }

            local.erase(remove(local.begin(),local.end(),'.'),local.end());

            string normalized=local+"@"+domain;
            gmail.insert(normalized);
        }
       return  gmail.size();
    }
};