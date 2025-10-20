class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {


       set<int,greater<int>>s(nums.begin(),nums.end());

       vector<int>ans;
       int count=0;

       for(auto i=s.begin();i!=s.end()&&count<k;i++)
       {
      
        ans.push_back(*i);
        count++;
       }

       return ans;

       



        
    }
};