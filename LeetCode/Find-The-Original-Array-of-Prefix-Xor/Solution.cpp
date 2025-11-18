class Solution {
public:
    vector<int> findArray(vector<int>& pref) {

        int a=pref[0];

        for(int i=1;i<pref.size();i++)
        {
            pref[i]=a^pref[i];
            a^=pref[i];
        }
        return pref;
        
    }
};