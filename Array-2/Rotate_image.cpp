#include<iostream>
#include<vector>
using namespace std;
int main(){



vector<vector<int>>matrix{
    {5,1,9,11},
    {2,4,8,10},
    {13,3,6,7},
    {15,14,12,16}


};
int n=matrix.size();
int m=matrix[0].size();
vector<vector<int>>mat(n,vector<int>(m,0));


for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        mat[j][(n-1)-i]=matrix[i][j];

    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}