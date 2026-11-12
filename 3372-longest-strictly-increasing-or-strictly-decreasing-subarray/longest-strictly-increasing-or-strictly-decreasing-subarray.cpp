class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count1=1;
        int count2=1;
        int maxcount=1;

        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                count1++;
                count2=1;
            }

            else if(nums[i]>nums[i+1]){
                count2++;
                count1=1;
            }

            else {
                count1=1;
                count2=1;
            }
            maxcount=max(maxcount,max (count1,count2));
        }
        return maxcount;
    }
};