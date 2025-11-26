1# Write your MySQL query statement below
2SELECT e1.name AS Employee
3FROM Employee AS e1
4JOIN Employee AS e2
5ON e1.managerId = e2.id
6WHERE e1.salary >e2.salary;
7