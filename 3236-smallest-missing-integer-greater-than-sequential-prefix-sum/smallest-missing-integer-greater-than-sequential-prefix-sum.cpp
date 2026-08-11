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
        unordered_set<int>srch(nums.begin(),nums.end());
        while(srch.count(sum)){
            sum++;
        }
        return sum;
    }
};