class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur=0,ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            cur+=nums[i];
            ans=max(cur,ans);
            if(cur<0) cur=0;
        }
        return ans;
    }
};