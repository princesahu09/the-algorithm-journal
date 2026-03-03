1class Solution {
2public:
3    void dfs(vector<vector<int>>& image, int i, int j, int newColor,
4             int orgColor) {
5        if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() ||
6            image[i][j] == newColor || image[i][j] != orgColor) {
7            return;
8        }
9        image[i][j] = newColor;
10        dfs(image, i + 1, j, newColor, orgColor);
11        dfs(image, i - 1, j, newColor, orgColor);
12        dfs(image, i, j + 1, newColor, orgColor);
13        dfs(image, i, j - 1, newColor, orgColor);
14    }
15    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
16                                  int color) {
17
18        dfs(image, sr, sc, color, image[sr][sc]);
19        return image;
20    }
21};