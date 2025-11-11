class Solution {
public:
    bool isIsomorphic(string s, string t) {
       

       

        unordered_map<char, char> p2w;
        unordered_map<char, char> w2p;


        for(int i=0;i<t.size();i++)
        {
            char p=s[i];
            char  w=t[i];


            if(p2w.count(p)&&p2w[p]!=w)return false;
            if(w2p.count(w)&&w2p[w]!=p)return false;

            p2w[p]=w;
            w2p[w]=p;
        }

        return true;
       

      

        
    }
};