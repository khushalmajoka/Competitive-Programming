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

        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int mn = arr[0];
        int mx = arr[0];

        bool check = false;

        for(int i = 1; i < n; i++){
            if(arr[i] >= mx){
                mx = arr[i];
            }else if(arr[i] <= mn){
                mn = arr[i];
            }else{
                cout << "NO" << endl;
                check = true;
                break;
            }
        }

        if(!check){
            cout << "YES" << endl;
        }
    }

    return 0;
}