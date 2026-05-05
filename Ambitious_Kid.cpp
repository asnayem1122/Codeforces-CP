//Problem Code: 1866A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    vector<long long> arr (n);
    long long Min = LONG_LONG_MAX;
    for(int i = 0; i<n; i++){
        long long x;
        cin>>x;
        Min = min(Min, abs(x));
    }

    cout<<abs(Min)<<endl;

    return 0;
}