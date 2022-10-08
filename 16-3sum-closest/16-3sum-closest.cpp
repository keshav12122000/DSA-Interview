class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mindiff=INT_MAX;    //to store the minimum difference between target and sum of 3 elements
        int minsum=0;    //to store the closest sum
        for(int i=0;i<nums.size()-2;i++)
        {
			//we choose one target i.e nums[i] and
			//convert the required target to target-nums[i];
			//so now we have to bring the sum of 2 elements closest to our newtarget
            int newtarget=target-nums[i];
            int left=i+1;
            int right=nums.size()-1;
            while(left<right)
            {
                int sum=nums[left]+nums[right];
				
                if(sum==newtarget)    //i.e if(sum+nums[i]==target)
                    return target;
					
                else if(sum<newtarget)    //since our (sum-target) is less than 0,
                    left++;               //we need to shift our left pointer to increase the (sum-target) value
					
                else                      //since our (sum-target) is greater than 0,
                    right--;              //we need to shift our right pointer to decrease the (sum-target) value
					
                int diff=abs(sum-newtarget);
                if(diff<mindiff)
                {
                    mindiff=diff;    //storing the mindiff and the closest sum at each step
                    minsum=nums[i]+sum;
                }
            }
        }
        return minsum;
    }
};