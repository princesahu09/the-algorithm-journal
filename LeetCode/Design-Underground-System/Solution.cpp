1class UndergroundSystem {
2public:
3
4    map<int,pair<string,int>>passenger;
5    map<pair<string,string>,vector<int>>time;
6    UndergroundSystem() {
7        
8    }
9    
10    void checkIn(int id, string stationName, int t) {
11
12        passenger[id]={stationName,t};
13
14
15        
16    }
17    
18    void checkOut(int id, string stationName, int t) {
19
20        auto temp=passenger[id];
21
22        string src=temp.first;
23        int t1=temp.second;
24
25        time[{src,stationName}].push_back(t-t1);
26
27        passenger.erase(id);
28       
29        
30    }
31    
32    double getAverageTime(string startStation, string endStation) {
33
34        vector<int>vec=time[{startStation,endStation}];
35        int n=vec.size();
36
37        int sum=0;
38
39        for(int i=0;i<vec.size();i++)
40        {
41            sum+=vec[i];
42        }
43
44        double ans=(double)sum/n;
45
46        return ans;
47        
48    }
49};
50
51/**
52 * Your UndergroundSystem object will be instantiated and called as such:
53 * UndergroundSystem* obj = new UndergroundSystem();
54 * obj->checkIn(id,stationName,t);
55 * obj->checkOut(id,stationName,t);
56 * double param_3 = obj->getAverageTime(startStation,endStation);
57 */