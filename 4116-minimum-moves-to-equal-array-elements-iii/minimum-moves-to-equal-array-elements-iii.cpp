class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max=nums[0];

        for(int num:nums){
            if(num>max)
            max=num;
        }

        int ans=0;

         for(int num:nums){
            ans+=max-num;
        }

        return ans;
    }
};