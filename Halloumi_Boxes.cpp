//Problem Code: 1903A
#include <bits/stdc++.h>
using namespace std;

string solve(int n, int k, vector<int>& arr) {
    if (k >= 2) return "YES";

    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());

    if (arr == sorted_arr) return "YES";
    else return "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (auto& i : arr) cin >> i;

        cout << solve(n, k, arr) << "\n";
    }

    return 0;
}