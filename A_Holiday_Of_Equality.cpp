#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int arr[n];
    int mx = -100000000;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    int count = 0;

    for(int i = 0; i < n; i++){
        count+=mx-arr[i];
    }

    cout << count;

    return 0;
}