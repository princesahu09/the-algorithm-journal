1class Solution {
2public:
3    string categorizeBox(int length, int width, int height, int mass) {
4
5        bool b = false;
6        bool h = false;
7
8        typedef long long ll;
9        const int m = 1e4;
10
11        ll vol = (ll)length * width * height;
12
13        if (vol >= 1e9 || length >= m || height >= m || width >= m) {
14            b = true;
15        }
16
17        if (mass >= 100) {
18            h = true;
19        }
20
21        if (b & h)
22            return "Both";
23        else if (!b & h)
24            return "Heavy";
25        else if (b & !h)
26            return "Bulky";
27        else
28            return "Neither";
29    }
30};