1class Solution {
2public:
3
4string builder(string s)
5{
6
7    string ans="";
8
9    for(auto &i:s)
10    {
11        if(i!='*')
12        {
13            ans+=i;
14        }
15    }
16    return ans;
17}
18
19
20    string removeDigit(string number, char digit) {
21
22       for(int i=0;i<number.size()-1;i++)
23       {
24
25        if(number[i]==digit&&number[i+1]>digit)
26        {
27            number[i]='*';
28            return builder(number);
29        }
30       }
31
32       int pos=number.find_last_of(digit);
33       number[pos]='*';
34       return builder(number);
35
36
37      
38
39       
40    }
41};