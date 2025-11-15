class Solution {

private:
    int bitmask(string &s)

    {

        int mask = 0;

        for (auto &i : s) {
            mask |= (1 << (i - 'a'));
        }
        return mask;
    }

public:
    int maxProduct(vector<string>& words) {
        const int n = words.size();
        vector<int> mask(n);
        vector<int> length(n);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            mask[i] = bitmask(words[i]);
            length[i] = words[i].size();
        }

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {
                if ((mask[i] & mask[j])==0) {
                    int product = length[i]*length[j];
                    ans = max(ans, product);
                }
            }
        }
        return ans;
    }
};