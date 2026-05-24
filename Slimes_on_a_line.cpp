//Problem Code: 2229A
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

        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());

        cout << (mx - mn + 1) / 2 << '\n';
    }

    return 0;
}