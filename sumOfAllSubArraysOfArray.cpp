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

        for(int i = 0; i < n; i++){
            int curr = 0;
            for(int j = i; j < n; j++){
                curr += arr[j];
                cout << curr << " ";
            }
        }
        cout << endl;
    }
    return 0;
}