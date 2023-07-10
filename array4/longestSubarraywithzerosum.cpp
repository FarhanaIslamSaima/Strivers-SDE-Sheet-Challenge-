#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

map<long long,int>presum;
long long sum=0;
int MAX=0;
for(int i=0;i<arr.size();i++){
  sum+=arr[i];
  if(sum==0){
    MAX=max(MAX,i+1);

  }
  int rem=sum-0;
  if(presum.find(rem)!=presum.end()){
    int len=i-presum[rem];
    MAX=max(len,MAX);

  }
  if(presum.find(sum)==presum.end()){
    presum[sum]=i;
  }
  
}
return MAX;


}