1class SmallestInfiniteSet {
2public:
3    set<int> s;
4    SmallestInfiniteSet() {
5
6        for (int i = 1; i <= 1000; i++) {
7            s.insert(i);
8        }
9    }
10
11    int popSmallest() {
12        auto it = s.begin();
13        int ans = *it;
14
15        s.erase(it);
16        return ans;
17    }
18
19    void addBack(int num) { s.insert(num); }
20};
21
22/**
23 * Your SmallestInfiniteSet object will be instantiated and called as such:
24 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
25 * int param_1 = obj->popSmallest();
26 * obj->addBack(num);
27 */