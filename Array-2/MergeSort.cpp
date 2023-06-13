#include<iostream>
#include<vector>
using namespace std;
void merge(int start, int mid ,int n,int arr[]){
    int left=start;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=n){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;

        }

    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;

    }
    while (right<=n)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=start;i<=n;i++){
        arr[i]=temp[i-start];
    }
    


}
void mergeSort(int ind, int n, int arr[]){
    if(ind>=n){
        return;
    }

int mid=ind+(n-ind)/2;
mergeSort(ind,mid,arr);
mergeSort(mid+1,n,arr);
merge(ind,mid,n,arr);


}

int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];


    }
    mergeSort(0,a-1,arr);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}