class Solution {
public:
    bool areOccurrencesEqual(string s) {

        vector<int> freq(26, 0);

        for (auto& i : s) {
            freq[i - 'a']++;
        }
        int starter = freq[0];

        for (auto& i : freq) {

            if (i > 0) {
                if (0 == starter)starter=i;
                else if(i!=starter)return false;
            }
        }

        return true;
    }
};