class Solution {
    public boolean checkIfCanBreak(String s1, String s2) {
        char[] a = s1.toCharArray();
        char[] b = s2.toCharArray();

        Arrays.sort(a);
        Arrays.sort(b);

        boolean canBreak1 = true;
        boolean canBreak2 = true;
        for(int i = 0 ; i < a.length ; i++) {
            if(canBreak1 != false && a[i] < b[i]) canBreak1 = false;
            if(canBreak2 != false && b[i] < a[i]) canBreak2 = false;
        }

        return canBreak1 || canBreak2;
    }
}