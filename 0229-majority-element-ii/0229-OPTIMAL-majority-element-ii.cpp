class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ls;
        int n = nums.size(), min = n/3 + 1;
        int cnt1 = 0, el1 = 0;
        int cnt2 = 0, el2 = 0;
        for(int i = 0; i<n; i++){

            if(cnt1 == 0 && nums[i]!=el2)        el1 = nums[i];
            else if(cnt2 == 0 && nums[i]!=el1)   el2 = nums[i];
            
            if(el1 == nums[i])         cnt1++;
            else if(el2 == nums[i])    cnt2++;
            else{
                cnt1--; cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int i = 0; i<n; i++){
            if(el1 == nums[i])          cnt1++;
            else if(el2 == nums[i])    cnt2++;
        }
        if(cnt1>=min)    ls.push_back(el1);
        if(cnt2>=min)    ls.push_back(el2);
        return ls;
    }
};
