#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int arr[m];

    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }

    sort(arr, arr+m);

    int mn = 10000000;

    for(int i = 0; i <= m-n; i++){
        mn = min(mn, arr[i+n-1]-arr[i]);
    }

    cout << mn;

    return 0;
}