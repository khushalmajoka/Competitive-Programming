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

        int arr[3][3];

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cin >> arr[i][j];
            }
        }

        int x = arr[0][1]+arr[0][2]+arr[1][2];
        int y = arr[1][0]+arr[2][0]+arr[2][1];

        if(arr[0][0] == n && arr[1][1] == n && arr[2][2] == n){
            cout << 0 << endl;
        }else{
            cout << max(x, y) << endl;
        }

    }

    return 0;
}