//Problem Code: 1862B
#include <bits/stdc++.h>
using namespace std;

int solve(int i, int j){
   return min(min(i, j), min(9-i, 9-j))+1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        vector<vector<char>>board(10, vector<char>(10));
        for(auto &i : board){
            for(auto &j : i){
                cin>>j;
            }
        }

        int sum = 0;
        for(int i = 0; i<10; i++){
            for(int j = 0; j<10; j++){
                if(board[i][j] == 'X'){
                    sum+=solve(i, j);
                }
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}