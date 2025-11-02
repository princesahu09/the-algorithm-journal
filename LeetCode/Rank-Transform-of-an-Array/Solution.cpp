class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        unordered_map<int, int> rank;

        vector<int> temp(arr.begin(), arr.end());
        sort(temp.begin(), temp.end());
        int j=0;
        for (int i = 0; i < temp.size(); i++) {

            if(rank.find(temp[i])==rank.end())
            {
                j++;
            }
            rank[temp[i]]=j;
        }

        for(int i=0;i<arr.size();i++)
        {
            auto it=rank.find(arr[i]);
            arr[i]=it->second;

        }

        return arr;
    }
};