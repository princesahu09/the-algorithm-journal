1class Solution {
2
3    int partition(int[] nums, int low, int high) {
4
5        int randomIndex = low + (int) (Math.random() * (high - low + 1));
6
7        int temp = nums[randomIndex];
8        nums[randomIndex] = nums[high];
9        nums[high] = temp;
10
11        int pivot = nums[high];
12
13        int i = low;
14        for (int j = low; j < high; j++) {
15
16            if (nums[j] >= pivot) {
17
18                 temp = nums[i];
19                nums[i] = nums[j];
20                nums[j] = temp;
21
22                i++;
23            }
24        }
25
26         temp = nums[i];
27        nums[i] = nums[high];
28        nums[high] = temp;
29
30        return i;
31    }
32
33    public int countElements(int[] nums, int k) {
34
35        if (k == 0) {
36            return nums.length;
37        }
38
39        int target = k - 1;
40
41        int low = 0;
42        int high = nums.length - 1;
43
44        while (low <= high) {
45
46            int pivotIndex = partition(nums, low, high);
47
48            if (pivotIndex == target) {
49
50                int pivot = nums[pivotIndex];
51
52                int count = 0;
53
54                for (int x : nums) {
55
56                    if (x < pivot) {
57                        count++;
58                    }
59                }
60
61                return count;
62            }
63
64            else if (pivotIndex > target) {
65
66                high = pivotIndex - 1;
67
68            }
69
70            else {
71
72                low = pivotIndex + 1;
73            }
74        }
75
76        return 0;
77    }
78}