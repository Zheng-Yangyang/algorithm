class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pos;
        for(int i = 0; i < nums.size(); i ++)
        {
            if(pos.find(target - nums[i]) != pos.end())
            {
                return {i, pos[target - nums[i]]};
            }
            pos[nums[i]] = i;
        }
        return {};
    }
};