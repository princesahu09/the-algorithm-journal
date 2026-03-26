1class OrderedStream {
2public:
3    vector<string> stream;
4    int i;
5
6    OrderedStream(int n) {
7        stream.resize(n + 1, "");
8        i = 1;
9    }
10
11    vector<string> insert(int idKey, string value) {
12
13        stream[idKey] = value;
14        vector<string> ans;
15        int n = stream.size();
16
17        while (i < n && stream[i] != "") {
18            ans.push_back(stream[i]);
19            i++;
20        }
21
22        return ans;
23    }
24};
25
26/**
27 * Your OrderedStream object will be instantiated and called as such:
28 * OrderedStream* obj = new OrderedStream(n);
29 * vector<string> param_1 = obj->insert(idKey,value);
30 */