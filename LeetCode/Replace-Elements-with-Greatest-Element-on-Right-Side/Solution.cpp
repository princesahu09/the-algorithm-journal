class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {

        for(int i=0;i+1<arr.size();i++)
        {
           auto it=max_element(arr.begin()+i+1,arr.end());
           arr[i]=*it;
        }
        arr[arr.size()-1]=-1;
        return arr;
        
    }
};