1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4
5        int backward = digits.size() - 1;
6        int sum = 0, carry = 0;
7
8        if ((digits[backward] + 1) > 9) {
9
10            while (backward >= 0) {
11
12                if ((digits.size() - 1) == backward) {
13                    digits[backward] += 1;
14
15                }
16                    sum = carry + digits[backward];
17
18                 if (backward == 0) {
19                    if (sum > 9) {
20                        digits[0] = sum % 10;
21                        carry = sum / 10;
22                        digits.insert(digits.begin(), carry);
23                        break;
24                    } else {
25                        digits[backward] += carry;
26                        return digits;
27                    }
28                }
29
30                else if (sum > 9) {
31                    carry = sum / 10;
32                    digits[backward] = sum % 10;
33                    sum = 0;
34                }
35                else {
36                    digits[backward]=sum;
37                    return digits;
38                }
39                backward--;
40            }
41
42        } else {
43            digits[backward] += 1;
44        }
45
46        return digits;
47    }
48};