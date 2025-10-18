class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();  
        // in case k > nums.size()
        vector<int>temp;


        while(k!=0)
        {
            
           
            temp.push_back(nums.back());
             nums.pop_back();
           
            k--;
        }
        reverse(temp.begin(),temp.end());
        nums.insert(nums.begin(),temp.begin(),temp.end());

        

        
        
    }
};