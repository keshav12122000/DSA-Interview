class Solution {
public:
//     int largestPerimeter(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.rbegin(),nums.rend());
//         for(int i=0;i<3;i++){
//             if(nums[i]+nums[i+1]>nums[i+2])
//             { 
//             return nums[i]+nums[i+1]+nums[i+2];
//         }
//     }
//         return 0;
// }
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-3;i>=0;i--){           //traverse from n-3 to 0
        if(nums[i]+nums[i+1] > nums[i+2]) {       
            return  nums[i]+nums[i+1]+nums[i+2];    // a=nums[i], b=nums[i+1], c=nums[i+2];
        }
    }
    return 0;                                       //else return 0
}
};