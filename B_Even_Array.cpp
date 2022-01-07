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
        int ev = 0;
        int od = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] % 2 == 0){
                ev++;
            }
        }

        od = n-ev;
        int count = 0;

        if(od == n/2){
            for(int i = 0; i < n; i+=2){
                if(arr[i] % 2 != 0){
                    count++;
                }
            }
            cout << count << endl;
        }else{
            cout << -1 << endl;
        }
    }

    return 0;
}