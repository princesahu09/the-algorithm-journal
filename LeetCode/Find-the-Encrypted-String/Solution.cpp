class Solution {
public:
    string getEncryptedString(string s, int k) {
        const int n=s.size();
    s=s+s;
    return s.substr(k%n,n);
        
    }
};