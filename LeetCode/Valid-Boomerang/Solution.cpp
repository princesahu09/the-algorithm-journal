class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {

        const int x1 = points[0][0];
        const int y1 = points[0][1];
        const int x2 = points[1][0];
        const int y2 = points[1][1];
        const int x3 = points[2][0];
        const int y3 = points[2][1];

        int sum=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);

        return sum!=0?true:false;
    }
};