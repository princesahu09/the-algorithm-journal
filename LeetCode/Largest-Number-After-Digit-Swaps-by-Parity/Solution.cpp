1class Solution {
2public:
3    int largestInteger(int num) {
4
5        vector<int> one;
6        vector<int> zero;
7        string str=to_string(num);
8
9        while (num > 0) {
10            int r = num % 10;
11            if ((r & 1) == 1) {
12                one.push_back(r);
13
14            } else
15
16            {
17                zero.push_back(r);
18            }
19            num /= 10;
20        }
21        sort(one.begin(),one.end());
22        sort(zero.begin(),zero.end());
23        
24        for(int i=0;i<str.size();i++)
25        {
26            int ch=str[i]-'0';
27            if(ch&1)
28            {
29                str[i]=one.back()+'0';one.pop_back();
30            }
31            else
32            {
33                str[i]=zero.back()+'0';zero.pop_back();
34            }
35        }
36        
37
38        return stoi(str);
39    }
40};