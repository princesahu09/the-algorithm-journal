1class Solution {
2public:
3    typedef long long ll;
4   
5    ll builder(string& str) {
6        ll ans = 0;
7
8        for (int i = 0; i < str.size(); i++) {
9            ans = ans * 10 + (str[i] - '0');
10        }
11        return ans;
12    }
13    int minMaxDifference(int num) {
14       
15
16        string str1 = to_string(num);
17        string str2 = to_string(num);
18        char low=0;
19        char high=0;
20
21        for( auto &i:str1)
22        {
23            if(i!='0'&&low==0)
24            {
25                low=i;
26            }
27            if(i!='9'&&high==0)
28            {
29                high=i;
30            }
31
32
33        }
34
35        for (int i = 0; i < str1.size(); i++) {
36            if (str1[i] == high) {
37                str1[i] = '9';
38            }
39            if (str2[i] == low) {
40                str2[i] = '0';
41            }
42        }
43
44        ll temp1 = builder(str1);
45        ll temp2 = builder(str2);
46
47        return abs(temp2 - temp1);
48    }
49};