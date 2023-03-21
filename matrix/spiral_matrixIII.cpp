class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
       
        vector<vector<int>>ans(rows*cols, vector<int>(2));
        int i=0;
        ans[i++]={rStart, cStart};
        int len=0;
        int direction[]={0,1,0,-1,0};
        int d=0;
        while(i<rows*cols){
            if(d==0 || d==2){
                len++;//as rStart cStart is already being pushed
            }
            for(int k=0; k<len;k++){
                rStart+=direction[d];
                cStart+=direction[d+1];
                
                if(rStart<rows && rStart >=0 && cStart<cols && cStart>=0)//inside b.c
                ans[i++]={rStart,cStart};

                cout<<rStart<<" "<<cStart<<" "<<len<<endl;
            }
            d=++d%4;//to switch direction
        }
          return ans;
    }
};