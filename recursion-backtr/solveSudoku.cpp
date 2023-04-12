class Solution 
{
    public:
    
    bool iskid(int grid[N][N],int row,int col, int k){
       
        
        // while(row>=0){  //nope ; ----check COMPLETE ROW!!!!!! as some are filled already UNLIKE N-QUUEN
        //     if(grid[row][col]==k)return false;
        //     row--;
        // }
        
       
        for(int i=0;i<N;++i){
          //row
        if(grid[row][i]==k)return false;
          //col
        if(grid[i][col]==k)return false;
          //3*3 Matrix
        if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==k)return false;  
      }
      return true;
        
    }
    
    // bool solve(int col,int grid[N][N]){//--------USING THIS INC T.C.
    //     if (col>9){
    //         return true;
    //     }
        
    //     for(int row=0; row<=9;row++){
    //         for(int k=1;k<=9;k++){
    //         if(grid[row][col]==0 && findDigit(col,row,grid,k)){
    //             grid[row][col]=k;
    //             solve(col+1,grid);  //grid[N][N] is element so don't pass that;  arr need not be passsed by ref
    //             grid[row][col]=0;
    //         }
    //     }}
        
    //     return false;
    // }
    
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        // if (solve(0,grid))return true;
        // return false;
        
        
        for(int i=0; i<9;i++){
            for(int j=0;j<9;j++){
                if (grid[i][j] == 0){
                    for(int k=1;k<=9;k++){
                        if (iskid(grid, i, j, k)){
                            grid[i][j] = k;
                            if (SolveSudoku(grid))return true;
                            else grid[i][j] = 0;
                            
                        }
                        
                    }
                    return false;    
                }
                     
                        }
                   
            
        }
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        if (SolveSudoku(grid)){
            for(int r=0;r<9;r++){
                for(int c=0;c<9;c++){
                    cout<<grid[r][c]<<" ";
                }
                //cout<<endl;
            }
        }
        return ;
    }
};