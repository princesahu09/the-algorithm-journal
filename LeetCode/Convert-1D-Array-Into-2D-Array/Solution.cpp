class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        
        const int s=original.size();
        if(s!=m*n)
        {
            return {};
        }

        vector<vector<int>>matrix(m,vector<int>(n,0));

        int row=0;
        int col=0;

        for(int i=0;i<s;i++)
        {
            matrix[row][col]=original[i];
            col++;
            if(col==n)
            {
                row++;
                col=0;
            }
           
        }
        return matrix;
        
    }
};