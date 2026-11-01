class Solution {
    public int minMoves(int[] nums) {
        int sum = 0;
       int a = nums[0];

       for(int i = 0;i < nums.length;i++){
        sum+=nums[i];
        a=Math.min(a,nums[i]);
       }
       return sum-nums.length*a;
    }
}