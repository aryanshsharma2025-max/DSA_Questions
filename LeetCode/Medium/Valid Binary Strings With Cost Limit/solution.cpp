class Solution {
public:
    vector<string> generateValidStrings(int n, int k) {
        vector<string> result;
        string s(n, '0');
        backtrack(s, 0, n, k, 0, result);
        return result;
    }

private:
    void backtrack(string &s, int pos, int n, int k, int cost, vector<string> &result) {
        if (pos == n) {
            if (cost <= k) result.push_back(s);
            return;
        }

        // Option 1: place '0'
        s[pos] = '0';
        backtrack(s, pos + 1, n, k, cost, result);

        // Option 2: place '1' (only if previous is not '1')
        if (pos == 0 || s[pos - 1] == '0') {
            s[pos] = '1';
            backtrack(s, pos + 1, n, k, cost + pos, result);
        }
    }
};