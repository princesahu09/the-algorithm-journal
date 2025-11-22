class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>a1;
        vector<int>a2;
        vector<int>a3;
        
        for(auto &i:nums)
        {
            if(i>pivot)
            {
                a3.push_back(i);
            }
            else if(pivot==i)
            {
                a2.push_back(i);
            }
            else
            {
                a1.push_back(i);
            }
        }

        a1.insert(a1.end(),a2.begin(),a2.end());
        a1.insert(a1.end(),a3.begin(),a3.end());

        return a1;
        
    }
};