1class Solution {
2public:
3    int minCostToMoveChips(vector<int>& position) {
4        int even=0,odd=0;
5
6        for(int i=0;i<position.size();i++)
7        {
8            if(position[i]%2==0)even++;
9            else odd++;
10        }
11        return min(even,odd);
12        
13    }
14};