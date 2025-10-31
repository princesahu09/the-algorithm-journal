#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string add(const string &a, const string &b) {
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        string res;
        res.reserve(max(a.size(), b.size()) + 1);

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            res.push_back(sum % 10 + '0');
            carry = sum / 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }

    string multiplication(char c, const string &num) {
        if (c == '0') return "0";
        if (c == '1') return num;

        int carry = 0;
        string res;
        res.reserve(num.size() + 1);

        for (int i = num.size() - 1; i >= 0; i--) {
            int prod = (num[i] - '0') * (c - '0') + carry;
            res.push_back(prod % 10 + '0');
            carry = prod / 10;
        }

        if (carry) res.push_back(carry + '0');
        reverse(res.begin(), res.end());
        return res;
    }

    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";

        int n = num1.size(), m = num2.size();
        vector<int> product(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = product[i + j + 1] + mul;
                product[i + j + 1] = sum % 10;
                product[i + j] += sum / 10;
            }
        }

        string ans;
        ans.reserve(n + m);
        int i = 0;
        while (i < product.size() && product[i] == 0) i++; 
        for (; i < product.size(); i++) ans.push_back(product[i] + '0');

        return ans.empty() ? "0" : ans;
    }
};
