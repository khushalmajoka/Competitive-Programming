#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    vector<bool> arr(d, false);

    for(int i = 1; i <= d; i++){
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) arr[i-1] = true;
    }

    int count = 0;

    for(int i = 0; i < d; i++){
        if(arr[i] == true) count++;
    }

    cout << count;
    return 0;
}