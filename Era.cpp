//Problem Code: 1604A
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long ops = 0;
        long long pos = 1; // actual position of current element

        for(int i = 0; i < n; i++){
            if(a[i] > pos){
                ops += a[i] - pos; // insert this many elements before it
                pos = a[i];        // now it sits at position a[i]
            }
            pos++; // move to next position
        }

        cout << ops << "\n";
    }

    return 0;
}