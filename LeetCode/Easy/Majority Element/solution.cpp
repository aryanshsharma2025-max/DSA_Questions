class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elements = 0; 
        int count = 0;
        for(int num : nums)
        {
            if(count == 0){
                elements = num;
            }
            if(num == elements){
                count++;
            }
            else{
                count--;
            }
        }
        return elements;
    }
};