//Problem Code: 2229B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        long long sum = 0;
        long long mxA = 0;

        for(int i = 0; i < n; i++) {
            long long mn = min(a[i], b[i]);
            long long mx = max(a[i], b[i]);

            sum += mx;
            mxA = max(mxA, mn);
        }

        cout << sum + mxA << '\n';
    }

    return 0;
}