class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int best=INT_MAX;

        for(int i=l;i<=r;i++){
            for(int j=0;j+i<=nums.size();j++){
                int sum=0;
                for(int k=j;k<i+j;k++)
                sum+=nums[k];
                if(sum>0 && sum<best)
                best=sum;
                }
            }
        if(best==INT_MAX) return -1;
        return best;
    }
};