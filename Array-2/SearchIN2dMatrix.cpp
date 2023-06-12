class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        map<int,int>mp;
        int p=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){

                mp[matrix[i][j]]=p;
                p++;
                
            }
        }
        
        if(mp.find(target)!=mp.end()){
            return true;
        }
        return false;

        
    }
};