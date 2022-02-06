#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        if(pow(0.143*n, n)-floor(pow(0.143*n, n)) < 0.5){
            cout << floor(pow(0.143*n, n)) << endl;
        }else{
            cout << floor(pow(0.143*n, n))+1 << endl;
        }
    }

    return 0;
}