class Solution {
public:
    int getLucky(string s, int k) {

        string number = "";
        for (auto& i : s) {

            number += to_string(i - 'a' + 1);
        }

        int ans = 0;

        while (k--) {
            int sum = 0;
            string str = number;

            for (auto& i : str) {
                sum += (i - '0');
            }
            ans = sum;
            number = to_string(sum);
        }
        return ans;
    }
};