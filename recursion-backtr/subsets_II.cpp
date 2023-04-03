class Solution {
public:
//M1 PICK NOTPICK BASIC
//M2 OPTIMIZE APPROACH OF SET OF ALL SUBSETS    
//M2-------------
    void opsolve(int indx, vector<int>nums, vector<int>&temp, set<vector<int>>&ans){
        
        // if(indx==nums.size()){
        //     ans.insert(temp);
        //     return;
        // }

        ans.insert(temp);
        for(int i=indx; i<nums.size();i++){
            if(i>indx && nums[i]==nums[i-1])continue;

            temp.push_back(nums[i]);
            opsolve(i+1, nums, temp,ans);
            temp.pop_back();
        }

        return ;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;

        vector<int>temp;
        //solve(0, nums, temp, ans);

        sort(nums.begin(),nums.end());
        opsolve(0,nums,temp,ans);
        vector<vector<int>>fans;

        for(auto val:ans){
            fans.push_back(val);
        }

        return fans; 
    }
};