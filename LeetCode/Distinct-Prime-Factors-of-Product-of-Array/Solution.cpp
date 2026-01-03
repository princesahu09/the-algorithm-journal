1class Solution {
2public:
3    int distinctPrimeFactors(vector<int>& nums) {
4
5        set<int> prime;
6
7        for (int& n : nums) {
8
9            while (n % 2 == 0) {
10                prime.insert(2);
11                n /= 2;
12            }
13
14            for (int i = 3; i * i <= n; i += 2) {
15
16                while (n % i == 0) {
17                    prime.insert(i);
18                    n /= i;
19                }
20            }
21
22            if (n > 1) {
23                prime.insert(n);
24            }
25        }
26
27        return prime.size();
28    }
29};