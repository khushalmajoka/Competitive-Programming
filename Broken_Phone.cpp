#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        if(a < b){
            cout << "REPAIR" << endl;
        }else if(a > b){
            cout << "NEW PHONE" << endl;
        }else{
            cout << "ANY"<< endl;
        }
    }

    return 0;
}