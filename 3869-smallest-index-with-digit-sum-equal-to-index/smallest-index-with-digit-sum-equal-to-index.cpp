class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            while(nums[i]>0){
                int dig=nums[i]%10;
                nums[i]/=10;
                sum+=dig;
            }
            if(sum==i) ans=min(ans,i);
        }
        if(ans<=n) return ans;
        return -1;
    }
};