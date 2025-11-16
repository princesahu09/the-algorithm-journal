class Solution {
public:
    double trimMean(vector<int>& arr) {
        const int n=arr.size();
        double mean=0.0;

        const int remover=n/20;
        const int deno=n-2*remover;
        sort(arr.begin(),arr.end());
        long long sum=accumulate(arr.begin()+remover,arr.end()-remover,0LL);
        mean=(double)sum/deno;


        return mean;
        
    }
};