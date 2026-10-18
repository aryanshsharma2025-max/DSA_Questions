class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int breakIndex = -1;

        for(int i = 0; i<n ;i++)
        {
            if(nums[i] > nums[(i+1) % n])
            {
                if(breakIndex != -1)
                {
                    return -1;
                }
                breakIndex = i;
            }
        }
        if (breakIndex == -1)
        {
            return 0;
        }
        return n - breakIndex - 1;
    }
};