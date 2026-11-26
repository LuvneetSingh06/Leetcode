class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        
        int a=10;
        int count=0;

        while(n>=0){
            n=n-a;
            a--;
            count++;
        }
        return (count%2)==0;
    }
};