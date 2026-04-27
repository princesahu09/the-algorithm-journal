1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    // bool search(vector<int>& nums, int target) {
14    //     int start = 0;
15    //     int end = nums.size() - 1;
16    //     while (start <= end) {
17    //         int mid = start + (end - start) / 2;
18
19    //         if (nums[mid] == target) {
20    //             return true;
21    //         }
22
23    //         else if (nums[mid] > target) {
24    //             end = mid - 1;
25    //         } else {
26    //             start = mid + 1;
27    //         }
28    //     }
29
30    //     return false;
31    // }
32    int numComponents(ListNode* head, vector<int>& nums) {
33
34        unordered_set<int> s(nums.begin(), nums.end());
35
36       
37        int ans = 0;
38
39        while (head) {
40            if (s.count(head->val)) {
41                ans++;
42                while (head && s.count(head->val)) {
43                    head = head->next;
44                }
45            }
46
47            else {
48                head = head->next;
49            }
50        }
51
52        return ans;
53    }
54};