#include<iostream>
#include<vector>
using namespace std;
int main(){
      long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n=4;
    int m=3;
    int arr3[m+n];
    int left=0;
    int right=0;
    int index=0;
    while (left < n && right < m) {
   if(arr1[left]<arr2[right]){
    arr3[index]=arr1[left];
  
    left++;
      index++;
   }
   else{
    arr3[index]=arr2[right];
    
    right++;
    index++;


   }
    }
    while(left<n){
        arr3[index++]=arr1[left++];
    }
    while(right<m){
        arr3[index++]=arr2[right++];
    }
    for(int i=0;i<m+n;i++){
        cout<<arr3[i];
    }

}