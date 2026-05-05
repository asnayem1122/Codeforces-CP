//Problem Code: 1862B
#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>&b){
    vector<int>a;
    long long n = b.size();
    a.push_back(b[0]); 
        for (long long i = 1; i < n; i++) 
        {
            if (b[i] >= b[i - 1])
                a.push_back(b[i]); 
            else
            {
                a.push_back(b[i]); 
                a.push_back(b[i]); 
            }
        }

    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        vector<int> arr(n);
        for(auto &i: arr){
            cin >> i;
        }

        vector<int> ans = solve(arr);

        cout << ans.size() << endl;
        for(auto &i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
}