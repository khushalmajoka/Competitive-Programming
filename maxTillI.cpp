#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int max = INT_MIN;

        for(int i = 0; i < n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
            cout << max << " ";
        }
        cout << endl;
    }

    return 0;
}