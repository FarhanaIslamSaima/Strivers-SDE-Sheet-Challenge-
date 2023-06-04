class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int count=0;
        do{
            
            for(int i=0;i<nums.size();i++){
                
                cout<<nums[i]<<" ";
                count++;
            }
        }while(next_permutation(nums.begin(),nums.end()) && count==1);
    }
};