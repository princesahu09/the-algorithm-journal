class Solution {
public:
    string reverseVowels(string s) {

        vector<char>vowels;
        string ans="";

      for(int i=0;i<s.size();i++)
      {
        char ch=s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowels.push_back(ch);
        }
      }
      reverse(vowels.begin(),vowels.end());
      int k=0;
      for(int i=0;i<s.size();i++)
      {
        char ch=s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            ans+=vowels[k];
            k++;
           
        }
        else
        {
            ans+=ch;
        }

      }

      return ans;
        
    }
};