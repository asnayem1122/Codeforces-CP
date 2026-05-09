//Problem Code: 1853A
#include<bits/stdc++.h>
using namespace std;


int solve(vector<int>&arr){
    bool is_Duplicate = true;

    for(int i = 0; i<arr.size()-1; i++){
        if(arr[i] != arr[i+1]){
            is_Duplicate = false;
        }
    }

    if(is_Duplicate) return 1;

    bool is_sorted = true;

    for(int i = 0; i<arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            is_sorted = false;
        }
    }

    if(!is_sorted) return 0;
    vector<int>dist;
    for(int i = 0; i<arr.size()-1; i++){
        int x = abs(arr[i+1] - arr[i]);
        
        dist.push_back((x/2)+1);
    }


    return *min_element(dist.begin(), dist.end());
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(auto &i : arr){
            cin>>i;
        }
        cout<<solve(arr)<<endl;
    }
}