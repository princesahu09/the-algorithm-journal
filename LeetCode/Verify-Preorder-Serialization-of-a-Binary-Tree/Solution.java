1class Solution {
2    void print(String[] arr) {
3        for (String i : arr) {
4            System.out.print(i + " ");
5        }
6        System.out.println();
7    }
8
9    public boolean isValidSerialization(String preorder) {
10
11        String[] arr = preorder.split(",");
12        print(arr);
13
14        int slot = 1;
15
16        for (int i = 0; i < arr.length; i++) {
17            if (slot == 0) {
18                return false;
19            }
20            if (!arr[i].equals("#")) {
21
22                slot = slot - 1 + 2;
23
24            } else {
25                slot--;
26            }
27        }
28        if (slot != 0) {
29            return false;
30        }
31
32        return true;
33
34    }
35}