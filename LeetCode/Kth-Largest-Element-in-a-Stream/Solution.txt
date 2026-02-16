1class KthLargest {
2public:
3
4priority_queue<int,vector<int>,greater<int>>pq;
5vector<int>vec;
6
7int kth;
8    KthLargest(int k, vector<int>& nums) {
9
10        vec=nums;
11        kth=k;
12        for(auto &i:nums)
13        {
14            pq.push(i);
15
16            if(pq.size()>k)
17            {
18                pq.pop();
19            }
20        }
21        
22    }
23    
24    int add(int val) {
25
26        pq.push(val);
27
28       
29        while(pq.size()>kth)
30        {
31           
32            pq.pop();
33            
34        }
35       
36
37        return pq.top();
38       
39        
40    }
41};
42
43/**
44 * Your KthLargest object will be instantiated and called as such:
45 * KthLargest* obj = new KthLargest(k, nums);
46 * int param_1 = obj->add(val);
47 */