class Solution {
public:
    int countAsterisks(string s) {
        int ans = 0;

        stringstream ss(s);
        string word;
        bool toggle = true;

        while (getline(ss, word, '|')) {
            if (toggle) {
            int counter = 0;
                for (char& i : word) {
                    if (i == '*') {
                        counter++;
                    }
                }
                ans += counter;
                toggle = !toggle;
            }
            else
            {
                toggle=!toggle;
            }
        }
        return ans;
    }
};