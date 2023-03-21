class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0, down=n-1,left=0,right=m-1;
        vector<int>ans;

          while(left<=right && top<=down){  
                for(int j=left; j<=right;j++){
                ans.push_back(matrix[top][j]);
                }
                cout<<matrix[top][right];
                top++;
                if(top>down)break;//as while will check after checking all inside conds!!!!1

                for(int i=top;i<=down;i++){
                    ans.push_back(matrix[i][right]);
                }
                cout<<matrix[down][right];
                right--;
                if(left>right)break;


                for(int j=right; j>=left;j--){
                    ans.push_back(matrix[down][j]); 
                }
                cout<<matrix[down][left];
                down--;

                for(int i=down;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                cout<<matrix[down][left]<<endl;
                left++;
          }
          return ans;
    }
};