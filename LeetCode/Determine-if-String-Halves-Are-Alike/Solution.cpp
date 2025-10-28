class Solution {
public:
    bool halvesAreAlike(string s) {

        int n = s.size();
        string a = s.substr(0, n / 2);
        string b = s.substr(n / 2, n);
        int v1 = 0;
        int v2 = 0;

        for (auto& i : a) {
            if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
                i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
                {
                    v1++;
                }
        }
         for (auto& i : b) {
            if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u' ||
                i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
                {
                    v2++;
                }
        }

        return v1 == v2 ? true : false;
    }
};