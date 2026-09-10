1class Solution {
2    public int[][] reverseSubmatrix(int[][] grid, int x, int y, int k) {
3
4        int srow = x;
5        int scol = y;
6        int erow = x + k - 1;
7        int ecol = y + k - 1;
8
9        while (srow < erow) {
10            for (int j = scol; j <= ecol; j++) {
11                int temp = grid[srow][j];
12                grid[srow][j] = grid[erow][j];
13                grid[erow][j] = temp;
14            }
15            srow++;
16            erow--;
17        }
18
19        return grid;
20
21    }
22}