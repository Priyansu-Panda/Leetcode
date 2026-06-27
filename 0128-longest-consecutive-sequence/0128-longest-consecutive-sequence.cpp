class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)    return 0;
        sort(nums.begin(),nums.end());
        int maxi = 1, n = nums.size(), cnt = 1;
        for(int i = 1; i<n; i++){
            
            if(nums[i]==nums[i-1])  continue;

            if(nums[i]==nums[i-1]+1){
                cnt++;
                maxi = cnt>maxi ? cnt : maxi;
            }else{
                cnt = 1;
            }
        }
        return maxi;
    }
};