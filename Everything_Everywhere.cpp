//Problem Code: 2226B
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        long long ans = 0;

        for (int i = 0; i < n - 1; i++) {
            if (__gcd(p[i], p[i + 1]) == abs(p[i] - p[i + 1])) {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}