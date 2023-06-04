class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int sum=0;
       int currSum=0;
       int MAX=INT_MIN;
       for(auto it:nums){
           currSum+=it;
           MAX=max(MAX,currSum);
           if(currSum<0)currSum=0;


           
       }
        return MAX;
        
    }
};