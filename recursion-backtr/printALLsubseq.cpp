//RECURSION PRINT ALL WAY------------
    void printsubseq(vector<int>&nums, int target,int indx, vector<int>&ans, int sum){
            
            if(sum>target)return false; //optimize!!!!!!

            if(indx>=nums.size()){
                if(sum==target){
                
                    for(int i=0; i<ans.size();i++){
                        cout<<ans[i]<<" ";
                    }
                    cout<<endl;
                }
            return ;
            }
            
            ans.push_back(nums[indx]);
            sum+=nums[indx];
            printsubseq(nums,target,indx+1,ans,sum);
    
            //mine=tmin, maxe=tmax;
            sum-=ans[ans.size()-1];
            ans.pop_back();
            printsubseq(nums,target,indx+1,ans,sum);
            
            return ;
    } 