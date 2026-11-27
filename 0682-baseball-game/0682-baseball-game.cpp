class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> scores;
        int sum = 0;

        // Use const string& to prevent unnecessary string copies
        for (const string& op : ops) {
            if (op == "C") {
                sum -= scores.back();
                scores.pop_back();
            } else if (op == "D") {
                int new_score = scores.back() * 2;
                sum += new_score;
                scores.push_back(new_score);
            } else if (op == "+") {
                int n = scores.size();
                int new_score = scores[n - 1] + scores[n - 2];
                sum += new_score;
                scores.push_back(new_score);
            } else {
                int new_score = stoi(op);
                sum += new_score;
                scores.push_back(new_score);
            }
        }

        return sum;
    }
};