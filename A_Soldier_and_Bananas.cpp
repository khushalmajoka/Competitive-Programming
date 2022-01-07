#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k , w;
    cin >> n >> k >> w;

    int total = 0;
    for(int i = 1; i <= w; i++){
        total += n*i;
    }

    if(total-k > 0){
        cout << total-k << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}