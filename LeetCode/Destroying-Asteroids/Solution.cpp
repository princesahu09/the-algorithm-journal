1class Solution {
2public:
3    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
4
5        sort(asteroids.begin(), asteroids.end());
6
7        long long m=mass;
8
9        for (int i = 0; i < asteroids.size(); i++) {
10            if (m < asteroids[i])
11                return false;
12            else {
13                m += asteroids[i];
14            }
15        }
16
17        return true;
18    }
19};