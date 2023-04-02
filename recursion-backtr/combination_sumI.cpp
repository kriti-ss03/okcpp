class Solution {
public:
    //use SUM n Taregt or reduce target each time!
    //TC =2^t * k ==for each insertion k time
    //SC k * x  ==k is length

    void f(int indx, vector<vector<int>>&ans, vector<int>&temp, vector<int>c, int sum, int target){
        if(sum>target)return ;

        if(indx==c.size()){
            if(target==sum){
                ans.push_back(temp);
            }
            return ;
        }

        //pick
        sum+=c[indx];
        temp.push_back(c[indx]);
        f(indx, ans, temp, c, sum, target);

        //notpick
        sum-=c[indx];
        temp.pop_back();
        f(indx+1,ans,temp,c,sum,target);

        return ;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;

        f(0, ans, temp, candidates, 0, target);

        return ans;
    }
};