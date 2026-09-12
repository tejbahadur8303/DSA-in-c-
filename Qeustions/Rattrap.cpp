#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int i, int j, int row, int column, int arr[][3],vector<vector<bool>>&visited){
    if( ((i>=0 && i < row) && (j>=0 && j < column )) && (arr[i][j] ==1) && (visited[i][j] ==false)){
        return true;
    }
    else{
        return false;
    }
}


void solvemaze(int arr[3][3],int row, int column,int i, int j,vector<vector<bool>>&visited, vector<string>&path,string output){
    if(i == row-1 && j == column-1){
        //ans foumd
        path.push_back(output);
        return ;
    }


    //down
    if(isSafe(i+1,j,row,column,arr,visited))
    {
        visited[i+1][j]=true;
        solvemaze(arr,row,column,i+1,j,visited,path,output+'D');
    //backtrack
    visited[i+1][j]= false;
    }

    //up

    if(isSafe(i-1,j,row,column,arr,visited))
    {
        visited[i-1][j]=true;
        solvemaze(arr,row,column,i-1,j,visited,path,output+'U');
    //backtrack
    visited[i-1][j]= false;
    }






    //right
    if(isSafe(i,j+1,row,column,arr,visited))
    {
        visited[i][j+1]=true;
        solvemaze(arr,row,column,i,j+1,visited,path,output+'R');
    //backtrack
    visited[i][j+1]= false;
    }







    //left


    if(isSafe(i,j-1,row,column,arr,visited))
    {
        visited[i][j-1]=true;
        solvemaze(arr,row,column,i,j-1,visited,path,output+'L');
    //backtrack
    visited[i][j-1]= false;
    }


}

int main(){
    int maze[3][3] ={
        {1,0,0},
        {1,1,0},
        {1,1,1}
    };
    int row=3;
    int column=3;

    vector<vector<bool>>visited(row,vector<bool>(column,false));
    visited[0][0]=true;

vector<string>path;
string output ="";
solvemaze(maze,row ,column,0,0,visited, path, output);

cout<< "printing the results"<<endl;
 for(auto i:path){
    cout<<i<<" ";
 }
 cout<<endl;


    return 0;
}