1class MinStack {
2public:
3    stack<pair<int, int>> s;
4    MinStack() {}
5
6    void push(int val) {
7        if (s.empty()) {
8            s.push({val, val});
9        } else {
10            int low = s.top().second;
11            low = min(val, low);
12            s.push({val, low});
13        }
14    }
15
16    void pop() { s.pop(); }
17
18    int top() { return s.top().first; }
19
20    int getMin() {
21
22        if (!s.empty()) {
23            return s.top().second;
24        }
25        return -1;
26    }
27};
28
29/**
30 * Your MinStack object will be instantiated and called as such:
31 * MinStack* obj = new MinStack();
32 * obj->push(val);
33 * obj->pop();
34 * int param_3 = obj->top();
35 * int param_4 = obj->getMin();
36 */