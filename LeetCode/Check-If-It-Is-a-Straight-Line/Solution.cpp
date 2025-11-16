class Solution {

    
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {

        if(coordinates.size()==2)return true;
      const  int x1=coordinates[0][0];
      const  int y1=coordinates[0][1];
      const  int x2=coordinates[1][0];
      const  int y2=coordinates[1][1];
      const  int dx=x2-x1;
      const int dy=y2-y1;

       
        for(int i=2;i<coordinates.size();i++)
        {
            int x=coordinates[i][0];
            int y=coordinates[i][1];

            if((y1-y)*dx==(x1-x)*dy)
            {
                 continue;
            }
            else
            {
                return false;
            }

        }
        return true;


        
    }
};