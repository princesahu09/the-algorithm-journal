class Solution {

private:
    long long merger(int num1, int num2)

    {
        string answer = to_string(num1) + to_string(num2);
        return stoll(answer);
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