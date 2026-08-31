1/**
2 * Definition for a binary tree node.
3 * public class TreeNode {
4 *     int val;
5 *     TreeNode left;
6 *     TreeNode right;
7 *     TreeNode() {}
8 *     TreeNode(int val) { this.val = val; }
9 *     TreeNode(int val, TreeNode left, TreeNode right) {
10 *         this.val = val;
11 *         this.left = left;
12 *         this.right = right;
13 *     }
14 * }
15 */
16class Solution {
17    class Pair {
18        int value;
19        int index;
20
21        Pair(int value, int index) {
22            this.value = value;
23            this.index = index;
24        }
25    }
26
27    void generate(TreeNode root, int index, List<Integer> arr) {
28        if (root == null) {
29            return;
30        }
31        generate(root.left, 2 * index + 1, arr);
32        arr.add(root.val);
33        generate(root.right, 2 * index + 2, arr);
34
35    }
36
37    void print(List<Integer> arr) {
38        // Collections.sort(arr,(a,b)->b.value-a.value);
39        for (Integer i : arr) {
40            // System.out.print( "("+ i.value+","+i.index+")");
41            System.out.print(i + " ");
42        }
43        System.out.println();
44    }
45
46    int index = 0;
47
48    void fill(TreeNode root, List<Integer> arr) {
49        if (root == null) {
50            return;
51        }
52        fill(root.left, arr);
53        root.val = arr.get(index++);
54        fill(root.right, arr);
55    }
56
57    public void recoverTree(TreeNode root) {
58
59        List<Integer> arr = new ArrayList<>();
60        generate(root, 0, arr);
61        print(arr);
62        Collections.sort(arr);
63
64        fill(root, arr);
65
66    }
67}