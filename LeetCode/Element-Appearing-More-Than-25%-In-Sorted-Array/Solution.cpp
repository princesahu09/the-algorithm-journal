class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int check=(int)ceil((double)arr.size()/4);
         unordered_map<int ,int>freq;

         for(auto &i:arr)
         {
            freq[i]++;
         }
         int ans=0;

         for(auto &i:freq)
         {
            if(i.second>=check)
            {
                ans=i.first;
                break;
            }
         }

         return ans;
        
    }
};