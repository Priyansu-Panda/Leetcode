class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1])   continue;
            int left = i+1, ryt = n-1;

            while(left<ryt){
                int sum = nums[i] + nums[left] + nums[ryt];
                if(sum == 0){
                    ans.push_back({nums[i], nums[left], nums[ryt]});
                    left++; ryt--;

                    while(left<ryt && nums[left]==nums[left-1]) left++;
                    while(left<ryt && nums[ryt] == nums[ryt+1]) ryt--;

                }else if(sum>0){
                    ryt--;
                }else{
                    left++;
                }
            }
        }
        return ans;
    }
};