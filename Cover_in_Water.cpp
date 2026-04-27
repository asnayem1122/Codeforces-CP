//Problem Code: 1900A
#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int n = s.size();
    bool hasThree = false;
    int totalDots = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '.') totalDots++;
        if (i + 2 < n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.')
            hasThree = true;
    }

    return hasThree ? 2 : totalDots;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s; cin >> s;
        cout << solve(s) << "\n";
    }

    return 0;
}