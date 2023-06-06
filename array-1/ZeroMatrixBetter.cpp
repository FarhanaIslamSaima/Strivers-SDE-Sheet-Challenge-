class Solution {
public:
 void markRow(int row,int col,int m,vector<vector<int>>& matrix){
     cout<<matrix.size();
           for(int i=0;i<m;i++){
               if(matrix[row][i]==0){
                   matrix[row][i]=0;
               }
               else{
                   
                   matrix[row][i]=-1;
                   cout<<matrix[row][i]<<endl;
               }

           }

       }
       void markCol(int row,int col,int n,vector<vector<int>>& matrix){
           for(int i=0;i<n;i++){
               if(matrix[i][col]==0){
                   matrix[i][col]=0;
               }
               else{
                   matrix[i][col]=-1;
               }
           }

       }
    void setZeroes(vector<vector<int>>& matrix) {
      int n=matrix.size();
      int m=matrix[0].size();
      vector<int>row(n,0);
      vector<int>col(m,0);

       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
               if(matrix[i][j]==0){
                   row[i]=-1;
                   col[j]=-1;
               }
           }
       }
       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
               if(row[i]==-1 || col[j]==-1){
                   matrix[i][j]=0;
               }
           }
       }
        
    }
};