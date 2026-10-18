class Solution {
public:
    int countArrangement(int n) {
        vector<int> used(n+1, 0);  
        return backtrack(n, 1, used);
    }

private:
    int backtrack(int n, int pos, vector<int>& used) {
        if (pos > n) return 1;  
        int count = 0;
        for (int num = 1; num <= n; num++) {
            if (!used[num] && (num % pos == 0 || pos % num == 0)) {
                used[num] = 1;
                count += backtrack(n, pos+1, used);
                used[num] = 0;
            }
        }
        return count;
    }
};