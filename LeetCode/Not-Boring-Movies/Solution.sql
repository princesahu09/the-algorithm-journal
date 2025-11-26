1# Write your MySQL query statement below
2select * from Cinema where (id%2<>0) AND (description<>"boring") order by rating desc;