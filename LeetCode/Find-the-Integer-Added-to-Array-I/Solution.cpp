1class Solution {
2public:
3    int addedInteger(vector<int>& num1, vector<int>& num2) {
4        if(num1==num2)return 0;
5        sort(num1.begin(),num1.end());
6        sort(num2.begin(),num2.end());
7
8        return num2[0]-num1[0];
9
10        
11    }
12};