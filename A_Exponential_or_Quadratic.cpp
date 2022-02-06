#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    if(pow(2, t) > t*t){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}