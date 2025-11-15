class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {

        sort(arr.begin(),arr.end());
        int cd=arr[1]-arr[0];

        for(int i=0;i+1<arr.size();i++)
        {
            if(arr[i+1]-arr[i]!=cd)
            {
                return false;
            }
            
        }
        return true;
        
    }
};