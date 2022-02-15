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
        int sum = 0;
        int one = 0;
        int two = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
            if(arr[i] == 1) one++; else two++;
        }

        if(sum % 2 != 0){
            cout << "NO" << endl;
        }else{
            if(n % 2 != 0 && one == 0){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}