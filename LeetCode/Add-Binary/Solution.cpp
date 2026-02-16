1class Solution {
2public:
3    string addBinary(string a, string b) {
4        int i=a.size()-1;
5        int j=b.size()-1;
6        int sum=0;
7        int carry=0;
8        string ans="";
9
10        while(i>=0||j>=0||carry)
11        {
12            sum=carry;
13           if(i>=0)
14           {
15            sum+=a[i--]-'0';
16           }
17           if(j>=0)
18           {
19            sum+=b[j--]-'0';
20
21           }
22            if(sum==0)
23            {
24                ans.push_back('0');
25                carry=0;
26
27            }
28            else if(sum==1)
29            {
30                ans.push_back('1');
31                carry=0;
32
33            }
34            else if (sum==2)
35            {
36                ans.push_back('0');
37                carry=1;
38
39            }
40            else if(sum==3)
41            {
42                ans.push_back('1');
43                carry=1;
44
45            }
46
47        }
48        reverse(ans.begin(),ans.end());
49        return ans ;
50
51        
52    }
53};