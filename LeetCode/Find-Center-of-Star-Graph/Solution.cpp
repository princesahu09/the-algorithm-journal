1class Solution {
2public:
3    int findCenter(vector<vector<int>>& edges) {
4        const int n=edges.size();
5
6        unordered_map<int,vector<int>>adjlist;
7
8        for(int i=0;i<edges.size();i++)
9        {
10            int u=edges[i][0];
11            int v=edges[i][1];
12
13            adjlist[u].push_back(v);
14            adjlist[v].push_back(u);
15        }
16
17        int counter=0;
18        for(auto &i:adjlist)
19        {
20
21            if(i.second.size()==n)
22            {
23                return i.first;
24            }
25            
26        }
27
28        return -1;
29    }
30};