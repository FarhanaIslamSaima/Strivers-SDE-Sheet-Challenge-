class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>mp;
        vector<int>count(100000,0);
        int num=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>1){
                num= nums[i];
                break;

            }
        }
        return num;
        
    }
};