class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        int d;
        for(int i = 0; i<nums.size(); i++){
            if(hash.find(nums[i]) != hash.end()){
                return {hash[nums[i]], i};
            }
            // d = (target>nums[i]) ? target-nums[i] : nums[i] - target;
            d = target-nums[i];
            hash[d] = i;
        }
        return {-1,-1};
    }
};
