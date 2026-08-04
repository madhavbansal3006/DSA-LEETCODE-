class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=INT_MAX,maxi=INT_MIN;
        for(int x : nums){
            mini=min(mini,x);
            maxi=max(maxi,x);
        }
        vector<int>ans;
        for(int i=mini;i<=maxi;i++){
            bool ispres=false;
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    ispres=true;
                }
            }
            if(!ispres) ans.push_back(i);
        }
        return ans;
    }
};