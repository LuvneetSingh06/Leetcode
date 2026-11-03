class Solution {
    public int minMoves(int[] nums) {
        int a=nums[0];

        for(int num:nums){
            a=Math.max(num,a);
        }
    int ans=0;
        for(int num:nums){
            ans+=a-num;
        }
        return ans;
    }
}