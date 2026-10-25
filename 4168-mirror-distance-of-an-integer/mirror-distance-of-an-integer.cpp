class Solution {
public:
    int mirrorDistance(int n) {
        int a=n;
        long x=0;
        while(a>0){
            x=x*10+a%10;
            a=a/10;
        }
        return abs(n-x);
    }
};