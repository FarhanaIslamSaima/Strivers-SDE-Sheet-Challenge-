class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>store;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int left=j+1;
                int right=nums.size()-1;
                while(left<right){
                    long long  sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[left];
                    sum+=nums[right];
                    if(sum>target){
                        right--;

                    }
                      else if(sum<target){
                        left++;
                    }
                    else if(sum==target){
                        vector<int>temp={nums[i],nums[j],nums[left],nums[right]};
                        store.push_back(temp);
                           left++;
                        right--;
                        while(left<right && nums[left]==nums[left-1]){
                                left++;
                        }
                       while(left<right && nums[right]==nums[right+1])right--;

                        
                     

                    }

                }
            }
         
        }
        return store;
        
    }
};