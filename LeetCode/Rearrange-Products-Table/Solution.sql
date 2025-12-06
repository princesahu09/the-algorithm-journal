1# Write your MySQL query statement below
2SELECT product_id,store,price FROM
3(
4
5    SELECT product_id,'store1' AS store, store1 AS price FROM Products
6    UNION ALL
7    SELECT product_id,'store2' AS store,store2 AS price FROM Products
8    UNION ALL
9    SELECT product_id,'store3' AS store ,store3 AS price FROM Products
10
11)AS tmp
12WHERE price IS NOT NULL;