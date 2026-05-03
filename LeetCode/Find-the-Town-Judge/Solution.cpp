1class Solution {
2public:
3    int findJudge(int n, vector<vector<int>>& trust) {
4
5        vector<int>arr(n+1,0);
6        vector<int>visited(n+1,true);
7
8        for(int i=0;i<trust.size();i++)
9        {
10            int a=trust[i][0];
11            int b=trust[i][1];
12            arr[b]++;
13            visited[a]=false;
14
15        }
16
17        for(int i=1;i<=n;i++)
18        {
19            if(arr[i]==n-1&&visited[i])
20            {
21
22                return i;
23
24            }
25        }
26
27
28
29        return -1;
30        
31    }
32};