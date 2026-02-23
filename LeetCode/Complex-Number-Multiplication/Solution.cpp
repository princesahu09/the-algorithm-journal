1class Solution {
2public:
3    vector<int> converter(string& nums) {
4        int idx = -1;
5        for (int i = 0; i < nums.size(); i++) {
6            if (nums[i] == '+') {
7                idx = i;
8                break;
9            }
10        }
11        string r = nums.substr(0, idx);
12        int real = stoi(r);
13        string c = nums.substr(idx + 1);
14        c.pop_back();
15        int complex = stoi(c);
16        return {real, complex};
17    }
18    string complexNumberMultiply(string num1, string num2) {
19
20        vector<int> n1 = converter(num1);
21        vector<int> n2 = converter(num2);
22       
23
24        int real = (n1[0] * n2[0]) - (n1[1] * n2[1]);
25        int complex = (n1[0] * n2[1] + n2[0] * n1[1]);
26        string ans = "";
27
28        ans += to_string(real);
29        ans += '+';
30        ans += to_string(complex);
31        ans += 'i';
32        return ans;
33    }
34};