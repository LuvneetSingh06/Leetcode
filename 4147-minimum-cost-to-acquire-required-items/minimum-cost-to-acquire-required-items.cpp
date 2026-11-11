class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long totalcost=0;

        if(cost1+cost2<costBoth)
        totalcost=1LL*need1*cost1 + 1LL*need2*cost2;

        else{
            int temp=min(need1,need2);
            totalcost=1LL*costBoth*min(need1,need2);

            need1-=temp;
            need2-=temp;

            if(need1>0){
                totalcost+=1LL*need1*min(cost1,costBoth);
            }

            else if(need2>0){
                totalcost+=1LL*need2*min(cost2,costBoth);
            }
        }
        return totalcost;
    }
};