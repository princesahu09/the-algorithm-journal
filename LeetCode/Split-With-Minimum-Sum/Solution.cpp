1class Solution {
2public:
3    int splitNum(int num) {
4      string str=to_string(num);
5        sort(str.begin(),str.end());
6        string num1="";
7        string num2="";
8
9       for(int i=0;i<str.size();i++)
10       {
11        char ch=str[i];
12        if(i%2==0)
13        {
14            num1+=ch;
15        }
16        else
17        {
18            num2+=ch;
19        }
20       }
21       
22        int sum=stoi(num1)+stoi(num2);
23        return sum;
24        
25
26
27        
28    }
29};