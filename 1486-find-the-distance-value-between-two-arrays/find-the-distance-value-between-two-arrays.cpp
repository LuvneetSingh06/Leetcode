class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=0;

        for(int num1:arr1){
            bool a=true;
            for(int num2:arr2){
                a=a && (abs(num1-num2)>d);
            }
            ans+=a;
        }
        return ans;
    }
};