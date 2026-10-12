1class Solution {
2    public boolean threeFibonacciSum(int n) {
3
4        int first=0;
5        int second=1;
6       while(first+second<=n)
7       {
8           int third=first+second;
9           if(first+second+third==n)
10           {
11               return true;
12           }
13           first=second;
14           second=third;
15       }
16
17
18        return false;
19        
20    }
21}