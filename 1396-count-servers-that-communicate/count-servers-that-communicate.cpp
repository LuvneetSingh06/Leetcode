class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> rowcount(grid[0].size(),0), colcount(grid.size(),0);

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                rowcount[j]++;
                colcount[i]++;
            }
        }
    }

        int ans=0;

         for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                ans+=rowcount[j]>1 || colcount[i]>1;
            }
        }
    return ans;
    }
};