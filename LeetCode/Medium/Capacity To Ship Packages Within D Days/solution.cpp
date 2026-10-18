class Solution {
public:

    bool Ship(vector<int>& weights, int days, int capacity)
    {
        int currentWeight = 0;
        int usedDays = 1;

        for(int weight : weights)
        {
            if(currentWeight + weight > capacity)
            {
                usedDays++;
                currentWeight = 0;
            }

            currentWeight += weight;
        }

        return usedDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days)
    {
        int left = 0;
        int right = 0;

        for(int weight : weights)
        {
            left = max(left, weight);
            right += weight;
        }

        while(left <= right)
        {
            int mid = left + (right - left) / 2;

            if(Ship(weights, days, mid))
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};