
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }

        int minLen = strs[0].size();

        for (int j = 1; j < strs.size(); j++) {
            minLen = min(minLen, (int)strs[j].size());
        }

        for (int i = 0; i < minLen; i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != strs[0][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }

        return strs[0].substr(0, minLen);
    }
};
