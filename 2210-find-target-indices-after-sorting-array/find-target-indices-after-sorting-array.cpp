class Solution {
public:
    vector<int>countsort(vector<int>arr){
        int n=arr.size();
        if(n==0)
        return arr;

        int maxelement=*max_element(arr.begin(),arr.end());
        vector<int>count(maxelement+1,0);

        for(int i=0;i<arr.size();i++){
            count[arr[i]]++;
        }

        int index=0;
       for (int i = 0; i <= maxelement; i++) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
       }
        return arr;
    }
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        nums=countsort(nums);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
            ans.push_back(i);
        }
        return ans;
    }
};