class Solution {

private:
   
    bool findGcd(vector<int>& nums)
    {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = gcd(nums[i], ans);
        }
        return ans == 1;
    }

public:
    int minOperations(vector<int>& nums) 
    {
        const int n = nums.size();

       
        if (!findGcd(nums)) return -1;

        
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
                one++;
        }

      
        if (one > 0)
        {
            return n - one;
        }

       
        int best = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int g = 0;
            for (int j = i; j < n; j++)
            {
                g = gcd(g, nums[j]);
                if (g == 1)
                {
                    best = min(best, j - i);
                    break;
                }
            }
        }

        
        return best + (n - 1);
    }
};
