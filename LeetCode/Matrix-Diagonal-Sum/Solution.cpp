class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {

        int p=0;
       
       
       

        for(int i=0;i<mat.size();i++)
        {
            p+=mat[i][i];
            p+=mat[i][mat.size()-i-1];
        }
      

        if(mat.size()%2==1)
        {
            return (p-mat[mat.size()/2][mat.size()/2]);
        }

        return p;



      
        
    }
};