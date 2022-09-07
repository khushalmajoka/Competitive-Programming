#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool check = false;

        for(int i = n-1; i >= 0; i--){
            if(arr[i] < x){
                cout << i+1 << endl;
                check = true;
                break;
            }
        }

        if(!check){
            cout << 0 << endl;
        }
    }

    return 0;
}