class Solution {
public:
    string maximumTime(string time) {

        for (int i = 0; i < time.size(); i++) {
            if (time[i] == '?') {

                if (i == 0) { // First hour digit
                    if (time[1] == '?' || time[1] <= '3')
                        time[i] = '2';
                    else
                        time[i] = '1';
                }

                else if (i == 1) { // Second hour digit
                    if (time[0] == '2')
                        time[i] = '3';
                    else
                        time[i] = '9';
                }

                else if (i == 3) { // First minute digit
                    time[i] = '5';
                }

                else if (i == 4) { // Second minute digit
                    time[i] = '9';
                }
            }
        }

        return time;
    }
};
