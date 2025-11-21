class Solution {

private:
    int digits(int num)
    {
        int counter=0;
        while(num>0)
        {
            counter++;
            num/=10;
        }
        return counter;
    }
    long long merger(int num1, int num2)

    {
        int d=digits(num2);
        long long answer=num1*pow(10,d)+num2;
        
        return answer;
    }

public:
    long long findTheArrayConcVal(vector<int>& nums) {

        const int n = nums.size();
        int start = 0;
        int end = n -1;
        long long answer = 0;

        while (start<end) {

            answer += merger(nums[start], nums[end]);
            start++;
            end--;
        }
        if(n%2!=0)
        {
            answer+=nums[start];
        }

        return answer;
    }
};