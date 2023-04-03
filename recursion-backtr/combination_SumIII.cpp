class Solution {
public:
   void solve(int indx, int k , int n , vector<vector<int>>&ans, vector<int>&temp,vector<int>arr){
      if(indx==9){
       if(n==0){
           if(k==0){
               ans.push_back(temp);
           }
       
       }return ;
       }

       if(arr[indx]<=n){
           temp.push_back(arr[indx]);
           solve(indx+1,k-1,n-arr[indx],ans,temp,arr);
           temp.pop_back();
       }

        
        solve(indx+1,k,n,ans,temp,arr);
        return ;
   }
   
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>arr;
        for(int i= 1; i<=9;i++){
            arr.push_back(i);
        }
        vector<int>temp;
        vector<vector<int>>ans;

        solve(0, k, n, ans, temp, arr);
        return ans;
    }
};