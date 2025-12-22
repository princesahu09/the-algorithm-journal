1class Solution {
2public:
3    int NumberOfDevice(string laser) {
4        int counter = 0;
5        for (char &i : laser) {
6            if (i == '1') {
7                counter++;
8            }
9        }
10        return counter;
11    }
12    int numberOfBeams(vector<string>& bank){
13
14        const int n=bank.size();
15        
16        int ans=0;
17        int prev=0;
18
19        for(int i=0;i<n;i++)
20        {
21            int curr=NumberOfDevice(bank[i]);
22            if(curr>0)
23            {
24                ans+=prev*curr;
25                prev=curr;
26
27            }
28        }
29
30       
31        
32
33
34        return ans;
35    }
36};