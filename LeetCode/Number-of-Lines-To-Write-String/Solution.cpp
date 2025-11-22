class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int line = 1;              
        int sum = 100;              
        const int n = s.size();

        for (int i = 0; i < n; i++) {
            char ch = s[i];
            int index = ch - 'a';

            
            if (sum - widths[index] >= 0) {
                sum -= widths[index];
            } 
            else {                       
                line++;
                sum = 100 - widths[index];
            }
        }

        return {line, 100 - sum};
    }
};
