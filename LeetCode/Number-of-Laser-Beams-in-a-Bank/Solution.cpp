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
15        vector<int>temp(n,0);
16
17        for(int i=0;i<n;i++)
18        {
19            temp[i]=NumberOfDevice(bank[i]);
20        }
21
22        int ans=0;
23        int prev=0;
24        
25        for(int i=0;i<n;i++)
26        {
27
28            if(temp[i]>0)
29            {
30                ans+=prev*temp[i];
31                prev=temp[i];
32
33            }
34
35
36            
37            
38
39        }
40
41
42        return ans;
43    }
44};