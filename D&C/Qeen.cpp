#include<iostream>
#include<vector>

void printSolution(vector<vector<int>> &board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}



bool isSafe(int row, int col, vector<vector<int>> & board, int n){
    
}
 void solve(vector<vector<int>> board, int col, int n){
    //base case
    if(col >= n){
        printSolution(board,int);
        return;
    }
    for(int row=0; row<n; row++){
        if(isSafe(row,col,board,n)){
            //rakh do

            board[row][col]=1;
           // recursion solution large 
            solve(board,col+1, n);
           //backtracking
            board[row][col]=0;
        }
    }





 }



 int main(){
    int n=4;
    vector<vector<int>> board(n,vector<int>(n,0));
    int col=0;
    //0-> empty cell
    //1-> queen
    solve(board,col,n);
    return 0;
 }

