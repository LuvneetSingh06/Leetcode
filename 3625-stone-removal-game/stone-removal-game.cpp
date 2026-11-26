class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        
        int a=10;
        int count=0;

        while(n>=a){
            n=n-a;
            a--;
            count++;
        }
        return (count%2)==1;
    }
};