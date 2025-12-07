1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4
5        unordered_set<int>present(arr.begin(),arr.end());
6
7        int ans=0;
8        int i=1;
9        while(k>0)
10        {
11            if(!present.count(i))
12            {
13                ans=i;
14                k--;
15
16            }
17            i++;
18
19        }
20
21        return ans;
22        
23    }
24};