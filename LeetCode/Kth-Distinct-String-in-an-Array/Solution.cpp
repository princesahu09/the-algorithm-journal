1class Solution {
2public:
3    string kthDistinct(vector<string>& arr, int k) {
4
5        unordered_map<string, int> freq;
6        freq.reserve(arr.size());
7       
8        for (auto& i : arr) {
9            freq[i]++;
10        }
11
12        for (string& i : arr) {
13
14            if (freq[i] == 1) {
15                k--;
16                if (k == 0) {
17                    return i;
18                }
19    
20            }
21        }
22
23        return "";
24    }
25};