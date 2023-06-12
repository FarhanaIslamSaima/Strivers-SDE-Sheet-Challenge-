#include<iostream>
#include<vector>
using namespace std;
void merge(int low,int mid, int high,int arr[]){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
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
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        //cout<<temp[i-low];
        arr[i]=temp[i-low];
        cout<<arr[i]<<endl;
    }


}
void mergeSort(int low,int high, int arr[]){
    if(low>=high){
        return ;
    }
    int mid=(low+high)/2;
    mergeSort(low,mid,arr);
    mergeSort(mid+1,high,arr);
    //cout<<high<<endl;
    merge(low,mid,high,arr);

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
        //cout<<arr[i]<<" ";
    }



    return 0;
}