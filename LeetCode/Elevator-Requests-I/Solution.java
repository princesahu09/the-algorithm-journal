1class Solution {
2    public int elevatorRequests(int n, int[] requests) {
3
4        int ans=requests[0];
5
6        for(int i=1;i<requests.length;i++)
7        {
8
9            ans+=Math.abs(requests[i]-requests[i-1]);
10
11        }
12        return ans;
13        
14    }
15}