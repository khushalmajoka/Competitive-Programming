#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        if(x == 1){
            cout << "HARD";
            return 0;
        }
    }

    cout << "EASY";

    return 0;
}