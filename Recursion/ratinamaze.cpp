#include <bits/stdc++.h>

using namespace std;

bool isSafe(vector<vector<int>>&arr,int i, int j,int row,int col,vector<vector<bool>> &check){
    return (i>=0) && (i<row) && (j>=0) && (j<col) &&!check[i][j] && (arr[i][j] == 1);
}

void solve(vector<vector<int>>&arr, int row, int col, vector<vector<bool>> &check,vector<string>& ans,string temp,int i = 0, int j = 0){
    //base case
    if(i == row-1 && j == col-1){
        ans.push_back(temp);
        return ;
    }

    //check down -> i+1,j
    if(isSafe(arr,i+1,j,row,col,check)){
        check[i+1][j] = true;
        solve(arr,row,col,check,ans,temp+'D',i+1,j);
        check[i+1][j] = false;
    }
    //check right -> i,j+1
    if(isSafe(arr,i,j+1,row,col,check)){
        check[i][j+1] = true;
        solve(arr,row,col,check,ans,temp+'R',i,j+1);
        check[i][j+1] = false;
    }
    //check left -> i,j-1
    if(isSafe(arr,i,j-1,row,col,check)){
        check[i][j-1] = true;
        solve(arr,row,col,check,ans,temp+'L',i,j-1);
        check[i][j-1] = false;
    }
    //check up -> i-1,j
    if(isSafe(arr,i-1,j,row,col,check)){
        check[i-1][j] = true;
        solve(arr,row,col,check,ans,temp+'U',i-1,j);
        check[i-1][j] = false;
    }
}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    int row = arr.size();
    int col = arr[0].size();  

    vector<vector<bool>> check(row, vector<bool>(col, false)); 

    string temp;
    vector<string> ans;

    check[0][0] = true;  

    if(arr[0][0] == 0)
        return ans;

    solve(arr, row, col, check, ans, temp);
    
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    vector<string> ans = searchMaze(arr, n);
    for(auto it : ans) {
        cout << it << " ";
    }
    return 0;
}