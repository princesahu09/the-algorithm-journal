1class BrowserHistory {
2public:
3stack<string>histroy;
4stack<string>holder;
5    BrowserHistory(string homepage) {
6        histroy.push(homepage);
7        
8    }
9    
10    void visit(string url) {
11        histroy.push(url);
12        while(!holder.empty())
13        {
14            holder.pop();
15        }
16        
17    }
18    
19    string back(int steps) {
20        while(histroy.size()>1&&steps>0)
21        {
22            holder.push(histroy.top());
23            histroy.pop();
24            steps--;
25
26        }
27        return histroy.top();
28        
29    }
30    
31    string forward(int steps) {
32        while(!holder.empty()&&steps>0)
33        {
34            histroy.push(holder.top());
35            holder.pop();
36            steps--;
37
38        }
39        return histroy.top();
40
41        
42    }
43};
44
45/**
46 * Your BrowserHistory object will be instantiated and called as such:
47 * BrowserHistory* obj = new BrowserHistory(homepage);
48 * obj->visit(url);
49 * string param_2 = obj->back(steps);
50 * string param_3 = obj->forward(steps);
51 */