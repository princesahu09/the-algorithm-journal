1class Solution {
2public:
3    bool threeConsecutiveOdds(vector<int>& arr) {
4
5
6        for(int i=1;i+1<arr.size();i++)
7        {
8            if(arr[i-1]&1==1&&arr[i]&1==1&&arr[i+1]&1==1)
9            {
10                return true;
11            }
12        }
13        return false;
14        
15    }
16};