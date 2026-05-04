//Problem Cpde: 1877A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);

        int sum=0;
        for(int i=0;i<n-1;i++){
            int x; cin >> x;
            sum +=x;
        }
        cout<< -sum << endl;
    }
    

    return 0;
}