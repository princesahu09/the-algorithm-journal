class Solution {
public:
    bool backspaceCompare(string s, string t) {

        string a = "";
        string b = "";

        for (auto& i : s) {
            if (i != '#') {
                a.push_back(i);
            } else {
                if (!a.empty()) {
                    a.pop_back();
                }
            }
        }
         for (auto& i : t) {
            if (i != '#') {
                b.push_back(i);
            } else {
                if (!b.empty()) {
                    b.pop_back();
                }
            }
        }

        return a == b;
    }
};