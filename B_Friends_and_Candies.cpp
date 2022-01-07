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
        int k = 0;
        int sum = 0;

        for(int  i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }

        if(n == 1){
            cout << 0 << endl;
        }else{
            int avg = sum/n;
            int avgr = sum%n;
            if(avgr == 0){
                for( int i = 0; i < n; i++){
                    if(arr[i] > avg){
                        k++;
                    }
                }
                cout << k << endl;
            }else{
                cout << -1 << endl;
            }
        }
    }

    return 0;
}