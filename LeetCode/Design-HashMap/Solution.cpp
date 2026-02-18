1class MyHashMap {
2public:
3unordered_map<int,int>h;
4    MyHashMap() {
5        
6    }
7    
8    void put(int key, int value) {
9        h[key]=value;
10        
11    }
12    
13    int get(int key) {
14        if(h.count(key))
15        return h[key];
16        return -1;
17        
18    }
19    
20    void remove(int key) {
21        h.erase(key);
22        
23    }
24};
25
26/**
27 * Your MyHashMap object will be instantiated and called as such:
28 * MyHashMap* obj = new MyHashMap();
29 * obj->put(key,value);
30 * int param_2 = obj->get(key);
31 * obj->remove(key);
32 */