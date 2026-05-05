//Problem Code: 1859A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (auto& i : a) cin >> i;

        long long mx = *max_element(a.begin(), a.end());

        vector<long long> b, c;
        for (auto i : a) {
            if (i != mx) b.push_back(i);
            else c.push_back(i);
        }

        if (b.empty()) {
            cout << -1 << "\n";
        } else {
            cout << b.size() << " " << c.size() << "\n";
            for (auto i : b) cout << i << " ";
            cout << "\n";
            for (auto i : c) cout << i << " ";
            cout << "\n";
        }
    }

    return 0;
}