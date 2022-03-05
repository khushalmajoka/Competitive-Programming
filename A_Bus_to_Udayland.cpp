#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    char arr[n][5];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }

    bool check = false;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            if((j == 0 && arr[i][j] == 'O' && arr[i][j+1] == 'O') || (j == 3 && arr[i][j] == 'O' && arr[i][j+1] == 'O')){
                arr[i][j] = '+';
                arr[i][j+1] = '+';
                check = true;
                break;
            }
        }
        if(check) break;
    }

    if(check){
        cout << "YES" << endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                cout << arr[i][j];
            }
            cout << endl;
        }
    }else{
        cout << "NO" << endl;
    }

    return 0;
}