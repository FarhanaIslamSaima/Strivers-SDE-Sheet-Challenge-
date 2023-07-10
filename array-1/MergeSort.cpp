#include<iostream>
#include<vector>
using namespace std;
int cnt=0;
void sort(int arr[],int low,int mid,int high){
    vector<int>temp;
    int start=low;
    int end=mid+1;
    while(start<=mid && end<=high){
        if(arr[start]<arr[end]){
           temp.push_back(arr[start]);
           start++;
        }
        else{
            temp.push_back(arr[end]);
            end++;
        }
    }
    while(start<=mid){
        temp.push_back(arr[start]);
        start++;
    }
    while (end<=high)
    {
        temp.push_back(arr[end]);
        end++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    

}
void reversePair(int arr[],int low,int mid,int high){
    int right=mid+1;
    for(int i=low;i<=mid;i++){
        while(right<=high && arr[i]>2*arr[right]) right++;
        cnt+=(right-(mid+1));
    }

}
void merge(int arr[],int high,int low){
    if(low>=high) return;
    int mid=low+(high-low)/2;
    merge(arr,mid,low);
    merge(arr,high,mid+1);
    reversePair(arr,low,mid,high);
    sort(arr,low,mid,high);

}
int main(){
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    merge(arr,a-1,0);
    for(int i=0;i<a;i++){
        //cout<<arr[i]<<" ";
    }
    cout<<cnt;
}