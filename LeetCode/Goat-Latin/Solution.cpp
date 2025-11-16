class Solution {
public:
    string toGoatLatin(string sentence) {

        string ans;

        stringstream ss(sentence);
        string word;
        int k = 1;
        while (ss >> word) {
            string temp = "";
            char ch = word[0];
            if (ch == 'a' || ch == 'e' || ch == 'o' || ch == 'i' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'O' || ch == 'I' || ch == 'U') {
                temp = word + "ma";

            } else {
                temp = word.substr(1, word.size());
                temp += word[0];
                temp += "ma";
            }
            int i = 0;
            while (i < k) {
                temp += 'a';
                i++;
            }
            ans += temp + " ";
            k++;
        }
        ans.pop_back();

        return ans;
    }
};