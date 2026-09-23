1class Solution {
2
3    class Pair {
4        int first;
5        int second;
6
7        Pair(int first, int second) {
8            this.first = first;
9            this.second = second;
10        }
11    }
12
13    public boolean findSubarrays(int[] nums) {
14
15        HashMap<Integer, List<Pair>> mp = new HashMap<>();
16
17        int low = 0;
18        int sum = 0;
19        for (int high = 0; high < nums.length; high++) {
20            sum += nums[high];
21
22            while (high - low + 1 > 2) {
23                sum -= nums[low];
24                low++;
25            }
26
27            if (high - low + 1 == 2) {
28                if (mp.containsKey(sum)) {
29                    mp.get(sum).add(new Pair(low, high));
30                } else {
31                    mp.put(sum, new ArrayList<>());
32                    mp.get(sum).add(new Pair(low, high));
33                }
34            }
35        }
36
37        for(Map.Entry<Integer,List<Pair>>entry:mp.entrySet())
38        {
39            List<Pair>arr=entry.getValue();
40
41            for(int i=0;i<arr.size();i++)
42            {
43
44                for(int j=0;j<arr.size();j++)
45                {
46                    if(i!=j)
47                    {
48                        if(arr.get(i).first!=arr.get(j).first)
49                        {
50                            return true;
51                        }
52                    }
53                }
54            }
55        }
56
57        return false;
58
59    }
60}