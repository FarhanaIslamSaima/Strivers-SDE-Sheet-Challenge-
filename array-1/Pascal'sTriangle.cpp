class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     
        vector<vector<int>>store(numRows);
        
        
        
        for(int i=0;i<numRows;i++){
            store[i].resize(i+1);
            store[i][0]=store[i][i]=1;
            for(int j=1;j<i;j++){
                store[i][j]=store[i-1][j]+store[i-1][j-1];
            }
        }
        return store;
        
    }
};