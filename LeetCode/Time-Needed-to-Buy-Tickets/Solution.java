1class Solution {
2    public int timeRequiredToBuy(int[] tickets, int k) {
3        int counter = 0;
4
5        ArrayDeque<Integer> q = new ArrayDeque<>();
6
7        for (int i = 0; i < tickets.length; i++) {
8            q.offerLast(i);
9        }
10
11        while (q.size() > 0) {
12            int index = q.pollFirst();
13
14            tickets[index]--;
15            counter++;
16
17            if (index == k && tickets[index] == 0) {
18                return counter;
19            }
20            if (tickets[index] > 0) {
21                q.offerLast(index);
22            }
23
24        }
25        return counter;
26
27    }
28}