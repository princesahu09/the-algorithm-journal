1class Solution {
2public:
3    int minimumSum(int num) {
4        string number=to_string(num);
5        int sum=INT_MAX;
6
7
8        sort(number.begin(),number.end());
9        int a=number[0]-'0';
10        int b=number[1]-'0';
11        int c=number[2]-'0';
12        int d=number[3]-'0';
13
14        sum=(a*10+d)+(b*10+c);
15
16
17
18       
19
20
21        return sum;
22        
23    }
24};