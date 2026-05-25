1class Solution {
2public:
3    int roman(char s)
4
5    {
6        int adder = 0;
7        if (s == 'I') {
8            adder = 1;
9        } else if (s == 'V') {
10            adder = 5;
11        } else if (s == 'X') {
12            adder = 10;
13        } else if (s == 'L') {
14            adder = 50;
15        } else if (s == 'C') {
16            adder = 100;
17        } else if (s == 'D') {
18            adder = 500;
19        } else if (s == 'M') {
20            adder = 1000;
21        }
22        return adder;
23    }
24    int romanToInt(string s) {
25
26        int sum = 0;
27        //  int adder=0;
28        for (int i = 0; i < s.size(); i++) {
29
30            int forward = i + 1;
31           // sum=sum+roman(s.at(i));
32
33            if (forward < s.size()) {
34                
35                if (roman(s.at(i)) < roman(s.at(forward)))
36                    sum = sum - roman(s.at(i));
37                 else if (roman(s.at(i)) == roman(s.at(forward)))
38                    sum = sum + roman(s.at(i));
39                    else
40                    {
41                        sum += roman(s.at(i));
42
43                    }
44               
45            }
46            else
47            {
48            sum+=roman(s.at(s.size()-1));
49            }
50          
51        }
52
53        return sum;
54    }
55};