class Solution {
public:
    bool validMountainArray(vector<int>& arr) {

        if (arr.size() < 3)
            return false;
        int i = 0;

        for (; i+1 < arr.size(); i++) {
            if (arr[i] < arr[i + 1]) {
                continue;
            } else {
                break;
            }
        }
        if(i==arr.size()-1||i==0)
        {
            return false;
        }
        for (; i +1< arr.size(); i++) {
            if (arr[i] > arr[i + 1]) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }
};