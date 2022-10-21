class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //method-1
    // for(int i=0;i<nums.size();i++)
    // {
    //     for(int j=i+1;j<nums.size();j++)
    //     {
    //         if(nums[i]==nums[j]&&abs(i-j)<=k)
    //             return true;
    //     }
    // }
    // return false;
    
    
    
       // method-2
    unordered_map<int,int>mp;
    bool ans=false;
    for(int i=0;i<nums.size();i++)
    {
        // cout<<mp[nums[i]]<<endl;
        // cout<<mp.count(nums[i])<<endl;
        if(mp.find(nums[i])!=mp.end()&&abs(i-mp[nums[i]])<=k)
        {
            return true;
        }
        mp[nums[i]]=i;
    }
    return false;
    
}
};
// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int,int> Map;
//         int n = nums.size();
//         for(int i=0; i<n; i++)
//         {
//             if(Map.count(nums[i]))
//             {
//                 if(abs(i-Map[nums[i]])<=k)
//                     return true;
//             }
//          Map[nums[i]] = i;
//         }
//         return false;
//     }
// };