int countsubseq(vector<int>&nums, int target, int indx, int sum, int maxe,int mine){
        if(sum>target)return false; //optimize!

        if(indx>=nums.size()){
            if(sum==target)return 1;
            return 0;
        }

        
        sum+=nums[indx];
        int l= countsubseq(nums,target, indx+1,sum,maxe,mine);

        sum-=nums[indx];
        int r=countsubseq(nums,target, indx+1,sum,maxe,mine);

        return l+r;
        
    }