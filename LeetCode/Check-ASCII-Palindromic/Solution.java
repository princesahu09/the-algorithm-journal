1class Solution {
2
3    boolean check(String str)
4    {
5        int start=0;
6        int end=str.length()-1;
7
8        while(start<end)
9        {
10            if(str.charAt(start)!=str.charAt(end))
11            {
12                return false;
13            }
14            start++;
15            end--;
16        }
17        return true;
18    }
19    StringBuffer numToStr(int n)
20    {
21        StringBuffer ans=new StringBuffer("");
22
23        while(n>0)
24        {
25            int r=n%2;
26            if(r==0)
27            {
28                ans.append('0');
29            }
30            else
31            {
32                ans.append('1');
33            }
34            n/=2;
35
36        }
37        if(0==n)
38        {
39            ans.append('0');
40        }
41        else
42        {
43            ans.append('1');
44        }
45        return ans;
46    }
47    public boolean isPalindromic(String s) {
48
49        
50        StringBuffer str=new StringBuffer("");
51
52        for(int i=0;i<s.length();i++)
53        {
54            int temp=(int)(s.charAt(i));
55            str.append(numToStr(temp));
56        }
57
58
59        String t=str.toString();
60
61        return check(t);
62        
63        
64    }
65}