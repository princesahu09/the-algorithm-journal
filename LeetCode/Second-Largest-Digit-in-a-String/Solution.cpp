class Solution {
public:
    int secondHighest(string s) {

        vector<int> number;

        for (auto& i : s) {
            if (i >= '0' && i <= '9')
                number.push_back(i - '0');
        }
       // sort(number.begin(), number.end());
        if (number.size() == 0)
            return -1;

            int second=-1;
            int first=-1;
            for(int i=0;i<number.size();i++)
            {
                if(number[i]>first)
                {
                    second=first;
                    first=number[i];
                }
                else if(first>number[i]&&number[i]>second)
                {
                    second=number[i];
                }
                else
                {
                    continue;
                }
            }
            return second;
        
    }
};