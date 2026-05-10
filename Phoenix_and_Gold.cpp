//Problem Code: 1515A
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        // sort ascending
        sort(arr.begin(), arr.end());

        // if total sum == x → impossible
        int total = 0;
        for(int i = 0; i < n; i++) total += arr[i];
        if(total == x){
            cout << "NO\n";
            continue;
        }

        // find prefix that hits x → swap with next element
        int prefix = 0;
        for(int i = 0; i < n - 1; i++){
            prefix += arr[i];
            if(prefix == x){
                swap(arr[i], arr[i + 1]);
                break;
            }
        }

        cout << "YES\n";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " \n"[i == n - 1];
    }

    return 0;
}