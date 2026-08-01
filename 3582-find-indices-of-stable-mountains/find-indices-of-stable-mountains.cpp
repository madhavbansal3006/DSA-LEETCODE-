class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int thr) {
        vector<int>ans;
        int n=height.size();
        for(int i=1;i<n;i++){
            if(height[i-1]>thr){
                ans.push_back(i);
            }
        }
        return ans;
    }
};