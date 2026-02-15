1class Solution {
2    public boolean isPalindrome(String s) {
3        int i = 0, j = s.length() - 1;
4        s = s.toLowerCase();
5        
6        while (i < j) {
7            // Move `i` forward if current character is not alphanumeric
8            while (i < j && !Character.isLetterOrDigit(s.charAt(i))) {
9                i++;
10            }
11            // Move `j` backward if current character is not alphanumeric
12            while (i < j && !Character.isLetterOrDigit(s.charAt(j))) {
13                j--;
14            }
15            
16            if (s.charAt(i) != s.charAt(j)) {
17                return false;
18            }
19            
20            i++;
21            j--;
22        }
23        
24        return true;
25    }
26}