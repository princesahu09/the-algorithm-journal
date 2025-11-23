class Solution {
public:
    string decodeMessage(string key, string message) {

        unordered_map<char,char>decode;
        char ch='a';
        decode[' ']=' ';

        for(auto &i:key)
        {
            if(!decode.count(i))
            {
                decode[i]=ch;
                ch++;
            }
        }
        string ans="";

        for(auto &i:message)
        {
            char adder=decode[i];
            ans+=adder;
            

        }

        return ans;
        
    }
};