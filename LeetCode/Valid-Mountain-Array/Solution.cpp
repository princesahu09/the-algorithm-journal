class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        const int n=arr.size();

        if (n< 3)
            return false;
        int i = 0;

        for (; i+1 < n; i++) {
            if (arr[i] < arr[i + 1]) {
                continue;
            } else {
                break;
            }
        }
        if(i==n-1||i==0)
        {
            return false;
        }
        for (; i +1< n; i++) {
            if (arr[i] > arr[i + 1]) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }
};