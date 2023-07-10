#include<iostream>
#include<vector>
using namespace std;
void subArray(int arr[],int ind,int n,vector<int>&store){
    for(auto it : store){
        cout<<it <<" ";
    }
    cout<<endl;
    for(int i=ind;i<n;i++){
        store.push_back(arr[i]);
        subArray(arr,ind+1,n,store);
        store.pop_back();
        
    }

}
int main(){
    int a;
    cin>>a;
    int arr[a];
    vector<int>store;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    subArray(arr,0,a,store);
    


    return 0;
}