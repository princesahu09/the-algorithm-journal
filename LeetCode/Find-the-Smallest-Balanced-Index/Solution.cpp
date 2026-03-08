1class Solution {
2public:
3    // void print(vector<int>&nums)
4    // {
5    //     for(auto &i:nums)
6    //     {
7    //         cout<<i<<" ";
8    //     }
9    //     cout<<endl;
10    // }
11    int smallestBalancedIndex(vector<int>& nums) {
12
13        int ans = INT_MAX;
14
15        const int n = nums.size();
16
17        vector<long long> prefix(n, 0);
18        prefix[0] = nums.front();
19        for (int i = 1; i < n; i++) {
20            prefix[i] = nums[i] + prefix[i - 1];
21        }
22
23        vector<long long> product(n, 1);
24        product[n - 1] = nums.back();
25        for (int i = n - 2; i >= 0; i--) {
26            if (nums[i] != 0 && product[i + 1] > LLONG_MAX / nums[i]) {
27                product[i] = LLONG_MAX; 
28            } else {
29                product[i] = nums[i] * product[i + 1];
30            }
31        }
32        // print(nums);
33
34        // print(prefix);
35        // print(product);
36
37        for (int i = 0; i < n; i++) {
38            if (i > 0 && i < n - 1 && prefix[i - 1] == product[i + 1]) {
39                ans = min(ans, i);
40            }
41        }
42
43        if (n > 1 && 0 == product[1]) {
44            ans = min(ans, 0);
45        }
46        if (n > 1 && 1 == prefix[n - 2]) {
47            ans = min(ans, n - 1);
48        }
49
50        return ans == INT_MAX ? -1 : ans;
51    }
52};