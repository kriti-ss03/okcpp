

bool isPossible(int r, int c, vector<vector<char>>board,int n){

    int drow = r, dcol = c;
    while(c>=0 && r>=0){
        if(board[r][c]=='Q')
            return false;
        r--;
        c--;
    }

    r = drow, c = dcol;
     while(c>=0 ){  //while (c) doesn't take equality sign
        if(board[r][c]=='Q')
            return false;
        c--;
    }
      r = drow, c = dcol;
     while(c>=0 && r<n ){
        if(board[r][c]=='Q')
            return false;
        c--;
        r++;
     }
     return true;
}

void solve(int col, vector<vector<char>>&board,vector<vector<int>>&ans,int n){

    if (col==n){
        vector < int >> temp;
        for (int i = 0; i < n;i++){//col
            for (int j = 0; j < n;j++){//row
                if(borad[j][i]=='Q')//alert j,i
                    temp.push_back(i + 1);
            }
        }
        return;
    }

    //on board items are pushed col wise
    for (int row = 0; row < n;row++){
        if(isPossible(row,col,board,n))
            board[row][col] = 'Q';
        solve(col + 1, board, ans, n);
        board[row][col] = '.';
    }
}


vector<vector<int>> nqueens(int n){
    vector<vector<char>> board(n,vector<char>(n,'.'));
    vector<vector<int>> ans;//storing cols value from each solved board

    solve(0, board, ans, n);

    return ans;
}