class Solution {
public:
    string reverseVowels(string s) {

        int i = 0;
        int j = s.size() - 1;
        string lvowels = "aeiou";
        string cvowels = "AEIOU";

        while (i < j) {
            char start = s[i];
            char end = s[j];
            if ((lvowels.find(start) != string::npos || cvowels.find(start) != string::npos) &&
                (lvowels.find(end) != string::npos || cvowels.find(end) != string::npos))

            {
                swap(s[i],s[j]);
                i++;j--;
            }
            else if(lvowels.find(start) == string::npos && cvowels.find(start) ==string:: npos)
            {
                i++;

            }
            else
            {
                j--;
            }
        }
        return s;
    }
};