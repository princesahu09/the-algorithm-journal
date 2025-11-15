class Solution {
public:
    char kthCharacter(int k) {

        string word = "a";
       
        while (word.size()<k) {
            string str = word;

            transform(str.begin(), str.end(), str.begin(),
                      [](char c) { return c + 1; });
            word += str;
           
        }

        return word[k - 1];
    }
};