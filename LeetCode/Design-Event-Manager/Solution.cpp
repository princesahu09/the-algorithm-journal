1class EventManager {
2public:
3    map<int, set<int>> manager;
4    unordered_map<int, int> mapping;
5    EventManager(vector<vector<int>>& events) {
6
7        for (int i = 0; i < events.size(); i++) {
8            int level = events[i][1];
9            int id = events[i][0];
10            mapping[id] = level;
11
12            manager[level].insert(id);
13        }
14    }
15
16    void updatePriority(int eventId, int newPriority) {
17
18        int level = -1;
19
20        if (mapping.count(eventId)) {
21            level = mapping[eventId];
22        }
23
24        if (level != -1) {
25            manager[level].erase(eventId);
26            mapping[eventId] = newPriority;
27            if (manager[level].empty()) {
28                manager.erase(level);
29            }
30        }
31        manager[newPriority].insert(eventId);
32    }
33
34    int pollHighest() {
35
36        if (manager.empty())
37            return -1;
38
39        auto it = manager.rbegin();
40        int high = it->first;
41
42        int ans = *manager[high].begin();
43
44        manager[high].erase(ans);
45        if (manager[high].empty()) {
46            manager.erase(high);
47        }
48
49        mapping.erase(ans);
50
51        return ans;
52    }
53};
54
55/**
56 * Your EventManager object will be instantiated and called as such:
57 * EventManager* obj = new EventManager(events);
58 * obj->updatePriority(eventId,newPriority);
59 * int param_2 = obj->pollHighest();
60 */