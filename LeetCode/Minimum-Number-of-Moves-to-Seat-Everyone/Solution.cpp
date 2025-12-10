1class Solution {
2public:
3    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
4
5        sort(seats.begin(),seats.end());
6        sort(students.begin(),students.end());
7
8
9        int ans=0;
10        for(int i=0;i<students.size();i++)
11        {
12            ans+=abs(seats[i]-students[i]);
13
14        }
15        return ans;
16        
17    }
18};