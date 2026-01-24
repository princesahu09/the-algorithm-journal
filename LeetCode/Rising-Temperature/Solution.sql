1# Write your MySQL query statement below
2select w1.id as Id from Weather as w1 join Weather as w2 on w1.recordDate=w2.recordDate+interval 1 day
3where w1.temperature>w2.temperature;