class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>stk;
        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=2*n-1;i>=0;i--){
            int idx=i%n;
            while(stk.size()>0 && stk.top()<=nums[idx]){
                stk.pop();
            }
            if(stk.empty()){
                ans[idx]=-1;
            }
            else{
                ans[idx]=stk.top();
            }
            stk.push(nums[idx]);
        }
        return ans;
    }
};