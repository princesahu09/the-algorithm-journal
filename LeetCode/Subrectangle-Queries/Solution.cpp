1class SubrectangleQueries {
2public:
3
4
5vector<vector<int>>rec;
6    SubrectangleQueries(vector<vector<int>>& rectangle) {
7
8     rec=rectangle;
9        
10    }
11    
12    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
13
14        for(int i=row1;i<=row2;i++)
15        {
16            for(int j=col1;j<=col2;j++)
17            {
18                rec[i][j]=newValue;
19            }
20        }
21        
22    }
23    
24    int getValue(int row, int col) {
25
26       return rec[row][col];
27        
28    }
29};
30
31/**
32 * Your SubrectangleQueries object will be instantiated and called as such:
33 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
34 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
35 * int param_2 = obj->getValue(row,col);
36 */