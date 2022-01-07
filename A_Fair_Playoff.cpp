#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

        int x = max(arr[0], arr[1]);
        int y = max(arr[2], arr[3]);

        sort(arr, arr+4);

        if(x == arr[3] && y == arr[2] || x == arr[2] && y == arr[3]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}