class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {


        const int n=items.size();
        int ans=0;

        for(int i=0;i<n;i++)
        {
           if(ruleKey=="color"&&ruleValue==items[i][1])
           {
            ans++;

           }
           else if(ruleKey=="type"&&ruleValue==items[i][0])
           {
            ans++;
           }
           else if(ruleKey=="name"&&ruleValue==items[i][2])
           {
            ans++;

           }


        }

        return ans;
        
    }
};