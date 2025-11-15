class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

      
        while (stones.size() > 1) {
            

          
            sort(stones.begin(), stones.end());

            int last = stones.back();
            stones.pop_back();

            int secondLast = stones.back();
            stones.pop_back();

            int smash = last - secondLast;

            if (smash > 0) {
                stones.push_back(smash);
            }
        }

      
        if (stones.size() == 0) return 0;

       
        return stones[0];
    }
};
