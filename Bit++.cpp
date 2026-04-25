// Problem Code: 282A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sum = 0;
    while(t--){
        string s;
        cin>>s;

        if(s == "X++" || s == "++X"){
            sum++;
        }else{
            sum--;
        }
    }
    cout<<sum<<endl;
    return 0;
}