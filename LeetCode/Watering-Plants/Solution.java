1class Solution {
2    public int wateringPlants(int[] plants, int capacity) {
3
4        int temp = capacity;
5        int cost = 0;
6
7        for (int i = 0; i < plants.length; i++) {
8            if (temp - plants[i] >= 0) {
9                temp -= plants[i];
10                cost++;
11            } else {
12                temp = capacity - plants[i];
13                cost += 2 * i + 1;
14            }
15        }
16
17        return cost;
18
19    }
20}