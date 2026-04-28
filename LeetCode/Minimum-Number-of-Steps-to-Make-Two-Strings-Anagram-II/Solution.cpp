1class Solution {
2public:
3    void freqG(vector<int>& arr, string& s) {
4        for (auto& i : s) {
5            arr[i - 'a']++;
6        }
7    }
8    int minSteps(string s, string t) {
9
10        vector<int> sfreq(26, 0);
11        vector<int> tfreq(26, 0);
12
13        freqG(sfreq, s);
14        freqG(tfreq, t);
15        int ans = 0;
16
17        for (int i = 0; i < 26; i++) {
18            ans += abs(sfreq[i] - tfreq[i]);
19        }
20
21        return ans;
22    }
23};