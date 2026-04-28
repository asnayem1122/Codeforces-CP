//Problem Code: 2226A
#include<bits/stdc++.h>
using namespace std;
 
vector<long long> dp;
vector<long long> arr;
 
const long long mod = 676767677;
 
long long solve(int i){
    if(i == arr.size()) return 0;
 
    if(dp[i] != -1) return dp[i];
 
    long long res = LLONG_MAX;
    long long mul = 1;
 
    for(int j = i; j < arr.size(); j++){
        if(j > i && arr[j] < arr[j-1]) break;
 
        mul = (mul * arr[j]) % mod;
 
        res = min(res, (mul + solve(j+1)) % mod);
    }
 
    return dp[i] = res;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        arr.resize(n);
        for(auto &i : arr) cin >> i;
 
        dp.assign(n, -1);
 
        cout << solve(0) % mod << endl;
    }
}