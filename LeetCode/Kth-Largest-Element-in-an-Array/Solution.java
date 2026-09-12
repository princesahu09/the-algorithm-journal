1class Solution {
2    void swap(int[] nums, int i, int j) {
3        int temp = nums[i];
4        nums[i] = nums[j];
5        nums[j] = temp;
6    }
7
8    int[] partition(int[] nums, int low, int high) {
9
10        int pivot = nums[high];
11
12        int lt = low;
13        int i = low;
14        int gt = high;
15
16        while (i <= gt) {
17
18            if (nums[i] < pivot) {
19                swap(nums, i, lt);
20                i++;
21                lt++;
22            }
23
24            else if (nums[i] > pivot) {
25                swap(nums, i, gt);
26                gt--;
27            }
28
29            else {
30                i++;
31            }
32        }
33
34        return new int[] { lt, gt };
35    }
36
37    public int findKthLargest(int[] nums, int k) {
38
39        int target = nums.length - k;
40
41        int low = 0;
42
43        int high = nums.length - 1;
44
45        while (low <= high) {
46            int[] pivotIndex = partition(nums, low, high);
47            int lt = pivotIndex[0];
48            int gt = pivotIndex[1];
49
50            if (target < lt) {
51                high = lt - 1;
52            }
53
54            else if (gt < target) {
55                low = gt + 1;
56            } else {
57                return nums[target];
58            }
59        }
60
61        return -1;
62
63    }
64}