class Solution {
public:
    string destCity(vector<vector<string>>& paths) {

        unordered_map<string,string>city;
        for( auto &i:paths)
        {
            city[i[0]]=i[1];
        }

        string searcher=paths[0][0];

        while(city.count(searcher))
        {
            searcher=city[searcher];

        }
        return searcher;
        
    }
};