class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int sig = nums[n-1];

        for(int i=0; i<n-1; i++){
            if(i==0 && nums[i]<nums[i+1]){
              sig=nums[i];
            }
            else if(i>0 && nums[i]>nums[i-1] && nums[i]<nums[i+1]){
                sig=nums[i];
            }
        }
        return sig;
    }
};