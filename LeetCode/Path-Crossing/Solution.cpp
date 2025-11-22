class Solution {
public:
    bool isPathCrossing(string path) {

       
        int x=0;
        int y=0;
        set<pair<int,int>>visited;
            visited.insert({0,0});

        for(auto &i:path)
        {

            if(i=='N')
            {
                y++;
            }
            else if(i=='S')
            {
                y--;
            }
            else if(i=='W')
            {
                x--;
            }
            else
            {
                x++;
            }
            if(visited.count({x,y}))return true;
            visited.insert({x,y});
        }
        return false;
    }
};