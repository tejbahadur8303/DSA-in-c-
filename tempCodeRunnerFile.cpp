int solve(vector<int>  & arr, int target){
    //baw case
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }
    //let solve the 1 case 
    int mini = INT_MAX;
    for(int i=0; i<arr.size(); i++){
        int ans = solve(arr, target - arr[i]);
        int mini =min(mini, ans);
    }
    return mini;

}
int main(){
    vector<int>arr{1,2};
    int target = 5 ;
    int ans = solve(arr, target);
    cout<<" answer is : "<< ans <<endl;
    return 0;
}