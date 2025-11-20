class Solution {
public:
    int getSum(int a, int b) {
        
        int num1=a,num2=b;

        int sum=num1^num2;
        int carry=num1&num2;

        while(carry!=0)
        {
           
            sum=num1^num2;
            carry=(num1&num2)<<1;
             num1=sum;
            num2=carry;
        }
       // sum=num1^num2;
        return sum;


        
    }
};