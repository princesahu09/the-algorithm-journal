class Solution {
public:
    bool isSameAfterReversals(int num) {

        string demo=to_string(num);
        reverse(demo.begin(),demo.end());
        long long i=stol(demo);
        demo=to_string(i);
        reverse(demo.begin(),demo.end());
        i=stol(demo);
        return num==i?true:false;
        
    }
};