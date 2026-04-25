// Problem Code: 2225C
#include <bits/stdc++.h>
using namespace std;

int solve(const vector<string>& str, int n) {
    int count = 0;
    int i = 0;

    while (i < n) {
        if (i + 1 < n) {
            // Calculate mismatches
            int vertical = (str[0][i] != str[1][i]) + (str[0][i+1] != str[1][i+1]);
            int horizontal = (str[0][i] != str[0][i+1]) + (str[1][i] != str[1][i+1]);

            // Choose cheaper option
            if (horizontal < vertical) {
                count += horizontal;
                i += 2;
            } else {
                count += (str[0][i] != str[1][i]);
                i++;
            }
        } else {
            // Last column case
            count += (str[0][i] != str[1][i]);
            i++;
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> str(2);
        cin >> str[0] >> str[1];

        cout << solve(str, n) << "\n";
    }
}
