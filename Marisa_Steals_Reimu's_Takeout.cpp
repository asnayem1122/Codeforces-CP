//Problem Code: 2228A
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int cnt[3] = {0};

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }

        int ans = 0;

        // each 0 alone
        ans += cnt[0];

        // make (1,2) pairs
        while(cnt[1] > 0 && cnt[2] > 0) {
            cnt[1]--;
            cnt[2]--;
            ans++;
        }

        // groups of three 1s
        while(cnt[1] >= 3) {
            cnt[1] -= 3;
            ans++;
        }

        // groups of three 2s
        while(cnt[2] >= 3) {
            cnt[2] -= 3;
            ans++;
        }

        cout << ans << endl;
    }
}