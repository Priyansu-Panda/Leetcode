class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<vector<int>> p;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            p.push_back({nums[i], i});
        }
        sort(p.begin(),p.end());
        int left = 0, ryt = n-1;
        while(left<=ryt){
            int sum = p[left][0] + p[ryt][0];
            if(sum==target){
                return {p[left][1], p[ryt][1]};
            }else if(sum < target){
                left++;
            }else{
                ryt--;
            }
        }
        return {-1,-1};
    }
};