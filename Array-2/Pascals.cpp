#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cin>>a;
    //cout<<"hello";
    vector<vector<int>>ans(a);

    for(int i=0;i<a;i++){
        ans[i].resize(i+1);
        ans[i][0]=ans[i][i]=1;
        //cout<<ans[i][i]<<endl;
        for(int j=0;j<i+1;j++){
    
            ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
                    cout<<ans[i][j];
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
           // cout<<ans[i][j]<<" ";
        }
        cout<<endl;

    }
    


    return 0;
}