class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long long curr=0,cnt=0,prev=1;

        for(int i=0; i<n;i++){
           
            curr+=nums[i];    
                if(curr==0 && prev!=1){
                   cnt+=prev;
                    prev++;
                }
                if(curr==0 && prev==1){
                        cnt++;prev++;
                        
                }

                if(nums[i]>0 || nums[i]<0){
                curr=0;
                prev=1;
                }
                
        }
        return cnt;
    }
};