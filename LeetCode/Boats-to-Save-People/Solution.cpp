1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4         sort(people.begin(),people.end());
5        int start=0;
6        int end=people.size()-1;
7        int ans=0;
8
9        while(start<=end)
10        {
11            if(people[start]+people[end]<=limit)
12            {
13                start++;
14                end--;
15            }
16          else  if(people[end]<=limit)
17            {
18                end--;
19            }
20            ans++;
21        }
22
23        return ans;
24        
25    }
26};