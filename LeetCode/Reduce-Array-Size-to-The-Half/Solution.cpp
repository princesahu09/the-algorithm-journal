1class Solution {
2public:
3    int minSetSize(vector<int>& arr) {
4         int n=arr.size();
5
6        unordered_map<int,int>freq;
7
8        for(auto &i:arr)
9        {
10            freq[i]++;
11        }
12
13        priority_queue<int>pq;
14        
15
16        for(auto &i:freq)
17        {
18            pq.push(i.second);
19        }
20        int ans=0;
21        int r=0;
22
23        while(r<n/2)
24        {
25            r+=pq.top();
26            pq.pop();
27
28           ans++;
29
30        }
31
32        return ans;
33        
34    }
35};