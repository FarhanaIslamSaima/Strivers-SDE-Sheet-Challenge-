class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int longest=0;
        int cnt=0;
        int minelement=INT_MIN;

    for(int i=0;i<nums.size();i++){
        if(nums[i]-1==minelement){
            cnt++;
            minelement=nums[i];
        }
        else if(nums[i]!=minelement){
            cnt=1;
            minelement=nums[i];
        }
        longest=max(longest,cnt);


    }
    return longest;
        
    }
};