1/*
2// Definition for Employee.
3class Employee {
4public:
5    int id;
6    int importance;
7    vector<int> subordinates;
8};
9*/
10
11class Solution {
12public:
13    int solve(vector<Employee*>& employees, int& ans, int idx, int id) {
14        if (idx == employees.size()) {
15            return ans;
16        }
17        if (employees[idx]->id == id) {
18            ans += employees[idx]->importance;
19            for (auto& i : employees[idx]->subordinates) {
20                solve(employees, ans, 0, i);
21            }
22        }
23        return solve(employees, ans, idx + 1, id);
24    }
25    int getImportance(vector<Employee*> employees, int id) {
26        int ans = 0;
27        return solve(employees, ans, 0, id);
28    }
29};