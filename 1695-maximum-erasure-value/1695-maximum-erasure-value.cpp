class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int currsum=0;
        int maxsum=0;
        unordered_set<int> set1;
        int i=0;
        int j=0;
        while(j<nums.size()){
            while(set1.count(nums[j])>0){
                set1.erase(nums[i]);
                currsum=currsum-nums[i];
                i++;
            }
            currsum=currsum+nums[j];
            set1.insert(nums[j++]);
            maxsum = max(maxsum, currsum);
        }
        
        return maxsum;
    }
};