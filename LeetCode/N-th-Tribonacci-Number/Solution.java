class Solution {
    public int tribonacci(int n) {

        if(n==0)return 0;
        else if(n==1||n==2)return 1;

        int x=0;
        int y=1;
        int z=1;
        int curr;
        for(int i=3;i<=n;i++)
        {
            curr=x+y+z;
            x=y;
            y=z;
            z=curr;
        }
        return z;
        
    }
}