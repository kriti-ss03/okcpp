    bool f(int indx,vector<int>arr, vector<int>&ans, int target,int sum){
        if(sum>target)return false; //optimize!
        
        if(indx>=arr.size()){
            
            if(sum==target){
                return true;
            }
        
            return false;
        }
        
        sum+=arr[indx];
        ans.push_back(arr[indx]);
        if(f(indx+1,arr,ans,target,sum)==true)return true;
        
        ans.pop_back();
        sum-=arr[indx];
        if(f(indx+1,arr,ans,target,sum)==true)return true;
        
        return false;
        
    }