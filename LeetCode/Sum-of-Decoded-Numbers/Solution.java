1class Solution {
2
3    long MOD = 1000000007L;
4
5    long power(long x, long y) {
6        long ans = 1;
7        while (y > 0) {
8            if ((y & 1) == 1) {
9                ans = (ans * x)%MOD;
10
11            }
12            x = (x * x)%MOD;
13            y /= 2;
14        }
15        return ans%MOD;
16    }
17
18    long logic(long num) {
19        long w = num % 10;
20        long d = num / 10;
21
22        String temp = String.valueOf(d);
23
24        StringBuffer str1 = new StringBuffer("");
25        StringBuffer str2 = new StringBuffer("");
26        int i = 0;
27        while (i < temp.length()) {
28            if (i < w) {
29                str1.append(temp.charAt(i));
30            } else {
31                str2.append(temp.charAt(i));
32            }
33            i++;
34        }
35
36        long x = Long.parseLong(str1.toString());
37        long y = Long.parseLong(str2.toString());
38
39        System.out.print(x + " ");
40        System.out.print(y);
41
42        long ans = ((power(x, y)) % MOD);
43
44        return ans;
45    }
46
47    public int sumDecoded(long[] nums) {
48
49        long ans = 0;
50
51        for (long i : nums) {
52            ans = ((long)(ans + logic(i)%MOD) % MOD) % MOD;
53        }
54        return (int) ans;
55
56    }
57}