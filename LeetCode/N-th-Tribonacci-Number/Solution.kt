class Solution {
    fun tribonacci(n: Int): Int {
        if(n==0)return 0;
        else if(n==1||n==2)return 1;
        var x=0;
        var y=1;
        var z=1;
        var curr=0;
        
        for(i in 3.. n)
        {
            curr=x+y+z;
            x=y;
            y=z;
            z=curr;
        }
        return z;

        
    }
}