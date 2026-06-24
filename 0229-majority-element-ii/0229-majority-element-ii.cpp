class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> freq;
        vector<int> ls;
        int min = n/3 + 1;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
            if(freq[nums[i]] == min){
                ls.push_back(nums[i]);
            }
            if(ls.size() == 2)  break;
        }
        sort(ls.begin(),ls.end());
        return ls;
    }
};
