    class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {

            set<int>unique;

            for (auto i:nums) {

                unique.insert(i);
            }
            

            nums.clear();
            for(auto i:unique){
                nums.push_back(i);

            }
            return unique.size();

        }
    };