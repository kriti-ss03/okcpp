class Solution {
public:
int assign(vector<int>& deck,vector<int>& ans,int indx,int gap, int i){
     int cnt=0,n=deck.size();
     while(indx<n){
            ans[indx]=deck[i];
            indx+=gap;
            i++;
            cnt++;
        }
        return cnt;
}
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
       
        int n=deck.size();
        sort(deck.begin(),deck.end());
         vector<int>ans(n,0);

        queue<int>q;
        for(int i=0; i<n;i++){
            q.push(i);
        }
           for(int i=0;i<n;i++)
        {
            //can't do this   ans.push_back(deck[q.front()]);
            ans[q.front()] = deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
        }


        // int indx=0,i=0,cnt=0;
        
        // while(cnt!=n){
        // cnt+=assign(deck,ans,4,3,i);
        // if(indx==n-1){
        //     indx=3;
        // cnt+=assign(deck,ans,4,3,i);
        
        // }else{
        //     indx=1;
        //     cnt+=assign(deck,ans,4,indx,i);
        // }
        //}
        
    return ans;
    }
};