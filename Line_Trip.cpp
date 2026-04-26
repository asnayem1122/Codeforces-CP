//Problem Code: 1901A
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr, int k ){
    int Max_dist = INT_MIN;
    for(int i = 1; i<arr.size(); i++){
        Max_dist = max(abs(arr[i] - arr[i-1]), Max_dist);
    }
    int go_back = 2*(abs(k - arr[arr.size()-1]));

    return max(Max_dist, go_back);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

     int t;
    cin>>t;
    while(t--){
        int n, d;
        cin>>n>>d;
        vector<int>pumps;
        pumps.push_back(0);
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            pumps.push_back(x);
        }
        cout<<solve(pumps, d)<<endl;
    }

    return 0;
}