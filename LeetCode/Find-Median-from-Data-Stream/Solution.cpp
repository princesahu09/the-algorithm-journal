1class MedianFinder {
2public:
3    priority_queue<int> p;
4    priority_queue<int, vector<int>, greater<int>> q;
5
6    MedianFinder() {}
7
8    void addNum(int num) {
9
10        if(p.empty()||num<=p.top())
11        {
12            p.push(num);
13        }
14        else
15        {
16            q.push(num);
17        }
18        if (q.size() > p.size() + 1) {
19            p.push(q.top());
20            q.pop();
21        }
22        if (p.size() > q.size() + 1) {
23            q.push(p.top());
24            p.pop();
25        }
26    }
27
28    double findMedian() {
29
30        int l = p.size() + q.size();
31
32        if (l % 2 == 0) {
33            return (p.top() + q.top()) / 2.0;
34        } else
35
36        {
37            if (p.size() > q.size()) {
38
39                return p.top();
40            } else {
41                return q.top();
42            }
43        }
44
45        return 0.0;
46    }
47};
48
49/**
50 * Your MedianFinder object will be instantiated and called as such:
51 * MedianFinder* obj = new MedianFinder();
52 * obj->addNum(num);
53 * double param_2 = obj->findMedian();
54 */