class Solution {
public:
    vector<vector<int>> spiralMatrix(int n, int m, ListNode* head) {
        // if (matrix.size() == 0) 
        //     return v;

        vector<vector<int>> ans(n, vector<int>(m,-1));
        int top=0, left=0, down=n-1, right=m-1;
        
        ListNode* temp= head;
        //if(head==NULL)return vector<vector<int>> ans(n, vector<int>(m,-1));

        int k=0;vector<int>t;
        while(top<=down && left<=right){

            
            for(int j=left; j<=right; j++){
               if(temp){
                ans[top][j]=temp->val;
                temp=temp->next;
               } 
            }
            //ans.push_back(t);
            //t.clear();
            
            top++;
            
            if(temp==NULL)break;


            for(int i=top; i<=down; i++){
              if(temp){
              ans[i][right]=temp->val;
                temp=temp->next;
                            

            }
            }
            right--;
            // ans.push_back(t);
            // t.clear();
            
            if(temp==NULL)break;

            for(int j=right;j>=left;j--){
                
                if(temp){
                    ans[down][j]=temp->val;
                    temp=temp->next;
                }

            }
            down--;
            
            
            if(temp==NULL)break;
            

            for(int i=down; i>=top; i--){
                if(temp){
                ans[i][left]=temp->val;
                temp=temp->next;
                            

            }
            }
            left++;
            
            
            if(temp==NULL)break;
                
        

        }
        cout<<top<<" "<<left<<" "<<down<<" "<<right<<endl;
       


        return ans;


    }
};