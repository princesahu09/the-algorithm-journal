class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {


       set<int,greater<int>>s(nums.begin(),nums.end());

       nums.clear();
       int count=0;

       for(auto i=s.begin();i!=s.end()&&count<k;i++)
       {
      
        nums.push_back(*i);
        count++;
       }

       return nums;

       



        
    }
};