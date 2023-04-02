class Solution {
public:
//tle bcoz of extra o(logn) while inserting in ds -set,map,etc- to avoid that change techniq

    void comb(int indx, vector<int>&temp, vector<vector<int>>&ans,vector<int>c, int target){
        if(target==0){
            ans.push_back(temp);
            return ;
        }

        for(int i=indx; i<c.size();i++){
            if(i>indx && c[i]==c[i-1])continue;
            if(c[indx]>target)break;
            temp.push_back(c[i]);
            comb(i+1,temp, ans, c, target-c[i]);
            temp.pop_back();

        }
        return ;
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>fans;
        sort(candidates.begin(),candidates.end());

        comb(0, temp, fans, candidates, target);

        // for(auto val:ans){
        //     fans.push_back(val);
        // }
        return fans;
    }
};