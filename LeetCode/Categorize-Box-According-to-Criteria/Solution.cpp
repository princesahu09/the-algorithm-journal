1class Solution {
2public:
3    string categorizeBox(int length, int width, int height, int mass) {
4
5        bool b = false;
6        bool h = false;
7
8        typedef long long ll;
9        int m = 1e4;
10
11        ll vol = (ll)length * width * height;
12
13        if (vol >= 1e9 || length >= m || height >= m || width >=m) {
14            b=true;
15        }
16
17        if (mass >= 100) {
18            h = true;
19        }
20
21        if(b&h)return "Both";
22        else if(!b&h)return "Heavy";
23        else if(b&!h)return "Bulky";
24        else return "Neither";
25
26        
27    }
28};