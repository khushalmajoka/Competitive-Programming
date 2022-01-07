#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;

    for(int i = 0; i < n; i++){
        int p, q;
        cin >> p >> q;

        if(p < q && q-p > 1){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}