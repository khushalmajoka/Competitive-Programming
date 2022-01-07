#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5][5];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    int i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                goto flag;
            }
        }
    }

    flag:
    int ans = abs(i-2)+abs(j-2);

    cout << ans << endl;
    return 0;
}