1-- # Write your MySQL query statement below
2SELECT  score ,DENSE_RANK() OVER (ORDER BY  score DESC ) AS `rank`
3FROM Scores ORDER BY score DESC;
4