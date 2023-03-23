class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
     map<int,vector<int>>mp;
     int x=k;

     for(int i=0;i<nums.size();i++){
         mp[nums[i]].push_back(i);
     } 

     for(auto val:mp){
         if(val.second.size()>=2){
            
             for(int j=0;j<val.second.size();j++){
                 cout<<val.second[j]<<" ";
                    k=x;
                 while(k!=0){
                 auto it=find(val.second.begin(),val.second.end(),val.second[j]+k);
                 if(it!=val.second.end())return true;

                 k--;
                 }
             }
         }
     } 
     return false; 
    }
};