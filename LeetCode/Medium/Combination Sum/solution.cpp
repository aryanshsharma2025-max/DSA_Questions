class Solution {
public:
    vector<vector<int>> result;

    void backtrack(vector<int>& candidates, int target, vector<int>& current, int index) {
        if (target == 0) {
            result.push_back(current);
            return;   
        }
        if (target < 0 || index >= candidates.size()) return;

        current.push_back(candidates[index]);
        backtrack(candidates, target - candidates[index], current, index);
        current.pop_back();

        backtrack(candidates, target, current, index + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        backtrack(candidates, target, current, 0);
        return result;
    }
};
