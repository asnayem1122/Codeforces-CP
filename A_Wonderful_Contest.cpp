//Problem Code: 2222A
#include <bits/stdc++.h>
using namespace std;

string result(vector<int>& arr) {
    for (auto i : arr) {
        if (i == 100) return "Yes";
    }
    return "No";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (auto& i : arr) cin >> i;

        cout << result(arr) << "\n";
    }

    return 0;
}