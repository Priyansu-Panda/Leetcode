class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> hash;
        int sum = 0, diff=0,cnt=0;
        hash[0] = 1;
        for(int i = 0; i<nums.size(); i++){
            sum+=nums[i];
            diff = sum - k;
            cnt+= hash[diff];
            // if(hash.find(diff) != hash.end())   cnt++;
            hash[sum]++;
        }
        return cnt;
    }
};