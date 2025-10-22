class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int k = n / 2;

        if (n % 2 != 0) {

            while (k > 0) {
                ans.push_back(k);
                ans.push_back(-k);
                k--;
            }
            ans.push_back(0);
        } else {
            while (k > 0) {
                ans.push_back(k);
                ans.push_back(-k);
                k--;
            }
        }
        return ans;
    }
};