1class Solution {
2public:
3    int minStoneSum(vector<int>& p, int k) {
4
5        priority_queue<int>maxHeap(p.begin(),p.end());
6
7        while(k-- >0)
8        {
9            int top=maxHeap.top();
10            maxHeap.pop();
11            top=top-floor(top/2);
12            maxHeap.push(top);
13        }
14        int sum=0;
15        while(!maxHeap.empty())
16        {
17            sum+=maxHeap.top();
18            maxHeap.pop();
19        }
20
21        return sum;
22
23        
24    }
25};