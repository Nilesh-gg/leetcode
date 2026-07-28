class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> res;
        vector<bool> vis(nums.size(),false);
        
        answer(nums, res, ans,vis);
        return ans;
    }
    void answer(vector<int>& nums,vector<int>& ans, vector<vector<int>>&res,vector<bool>&vis){
        if(ans.size()==nums.size()){
            res.push_back(ans);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i])
                continue;
            vis[i]=true;
            ans.push_back(nums[i]);
            answer(nums,ans,res,vis);
            ans.pop_back();
            vis[i]=false;
        }
    }
};