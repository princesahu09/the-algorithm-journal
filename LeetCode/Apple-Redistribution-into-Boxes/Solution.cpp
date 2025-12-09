1    class Solution {
2    public:
3        int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
4            sort(capacity.begin(),capacity.end(),greater<>());
5            int sum=accumulate(apple.begin(),apple.end(),0);
6            int ans=0;
7
8
9            for(int &i:capacity)
10
11            {
12                ans++;
13                sum-=i;
14                if(sum<=0)
15                {
16                    return ans;
17                }
18            }
19
20            return ans;
21            
22        }
23    };