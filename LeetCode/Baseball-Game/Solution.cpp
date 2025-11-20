class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> holder;
        int ans = 0;

        for (auto& i : operations) {
            if (i == "+") {
                int first = holder.top();
                holder.pop();
                int second = holder.top();
                holder.push(first);
                holder.push(first + second);

            } else if (i == "C") {
                holder.pop();

            } else if (i == "D") {
                int front = holder.top();
                holder.push(2 * front);

            } else {
                holder.push(stoi(i));
            }
        }
        while (!holder.empty()) {
            ans += holder.top();
            holder.pop();
        }

        return ans;
    }
};