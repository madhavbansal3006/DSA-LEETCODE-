class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0];
        for(int j=1;j<n;j++){
            if(nums[j]==nums[j-1]+1){
                sum+=nums[j];
            }
            else{
                break;
            }
        }
        int ans=sum;
        while(true){
            bool ispresent=false;
            for(int x: nums){
                if(x==ans){
                    ispresent=true;
                    break;
                }
            }
            if(!ispresent) return ans;

            ans++;
        }
        return ans;
    }
};