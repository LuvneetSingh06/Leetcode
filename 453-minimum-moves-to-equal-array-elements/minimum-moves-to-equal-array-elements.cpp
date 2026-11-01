class Solution {
public:
    int minMoves(vector<int>& nums) {
       int sum=0;
       int a=INT_MAX;
       for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        a=min(nums[i],a);
       } 
       return sum-nums.size()*a;
    }
};