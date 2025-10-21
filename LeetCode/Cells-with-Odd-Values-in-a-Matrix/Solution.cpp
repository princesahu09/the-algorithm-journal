class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int>rowcount(m,0);
        vector<int>colcount(n,0);
        for(auto &index:indices)
        {
            rowcount[index[0]]++;
            colcount[index[1]]++;
        }


          int odd = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if ((rowcount[i]+colcount[j]) % 2 != 0)
                    odd++;
            }
        }
        return odd;


        
    }
};