1class Solution {
2    public double minPrice(int[] prices, int[] discounts) {
3
4
5        Arrays.sort(prices);
6        Arrays.sort(discounts);
7        double ans=0.0;
8
9        int j=discounts.length-1;
10
11        for(int i=prices.length-1;i>=0;i--)
12        {
13
14            int p=prices[i];
15            //System.out.print(p+" ");
16
17            if(j>=0)
18            {
19                double temp=(p*(100-discounts[j]))/100.0;
20               // System.out.println(discounts[j]);
21               // System.out.println(temp);
22                ans+=temp;
23                j--;
24            }
25            else
26            {
27                ans+=(double)p;
28            }
29        }
30
31
32
33        return ans;
34        
35    }
36}